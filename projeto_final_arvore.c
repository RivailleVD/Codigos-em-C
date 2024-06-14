#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Definição da estrutura do nó da árvore
typedef struct Node {
    int value;
    struct Node *left;
    struct Node *right;
} Node;

// Função para criar um novo nó
Node *createNode(int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função para verificar se a árvore está cheia
int isFull(Node *node) {
    if (node == NULL) {
        return 1;
    }
    if ((node->left == NULL && node->right != NULL) || 
        (node->left != NULL && node->right == NULL)) {
        return 0;
    }
    return isFull(node->left) && isFull(node->right);
}

// Função para buscar um elemento na árvore
Node *search(Node *node, int value) {
    if (node == NULL) {
        return NULL;
    }
    if (node->value == value) {
        return node;
    }
    Node *result = search(node->left, value);
    if (result == NULL) {
        result = search(node->right, value);
    }
    return result;
}

// Função para inserir um elemento na árvore
Node *insert(Node *node, int value) {
    if (node == NULL) {
        return createNode(value);
    }
    if (value < node->value) {
        node->left = insert(node->left, value);
    } else {
        node->right = insert(node->right, value);
    }
    return node;
}

// Função para calcular a distância entre a raiz e um nó alvo
int distance(Node *node, Node *target_node) {
    if (node == NULL) {
        return INT_MAX;
    }
    if (node == target_node) {
        return 0;
    }
    int left_distance = distance(node->left, target_node);
    int right_distance = distance(node->right, target_node);
    return (left_distance < right_distance) ? left_distance + 1 : right_distance + 1;
}

// Função para calcular a altura da árvore
int height(Node *node) {
    if (node == NULL) {
        return 0;
    }
    int left_height = height(node->left);
    int right_height = height(node->right);
    return (left_height > right_height) ? left_height + 1 : right_height + 1;
}

// Função para determinar o nível de um nó na árvore
int level(Node *node, Node *target_node) {
    if (node == NULL) {
        return INT_MAX;
    }
    if (node == target_node) {
        return 0;
    }
    int left_level = level(node->left, target_node);
    int right_level = level(node->right, target_node);
    return (left_level < right_level) ? left_level + 1 : right_level + 1;
}

// Função para imprimir a árvore em pré-ordem
void printTree(Node *node) {
    if (node == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d\n", node->value);
    printTree(node->left);
    printTree(node->right);
}

int main() {
    Node *root = NULL;

    // Inserindo alguns elementos na árvore
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 20);

    // Verificando se a árvore está cheia
    if (isFull(root)) {
        printf("A arvore esta cheia\n");
    } else {
        printf("A arvore nao esta cheia\n");
    }

    // Buscando um elemento na árvore
    Node *searched_node = search(root, 15);
    if (searched_node != NULL) {
        printf("Elemento encontrado: %d\n", searched_node->value);
    } else {
        printf("Elemento nao encontrado\n");
    }

    // Calculando a distância entre a raiz e um nó específico
    int distance_result = distance(root, root->right->right);
    if (distance_result != INT_MAX) {
        printf("Distancia entre a raiz e o no 20: %d\n", distance_result);
    } else {
        printf("O no 20 nao esta presente na arvore\n");
    }

    // Calculando a altura da árvore
    int tree_height = height(root);
    printf("Altura da arvore: %d\n", tree_height);

    // Determinando o nível de um nó específico
    int node_level = level(root, root->left->left);
    if (node_level != INT_MAX) {
        printf("Nivel do no 2: %d\n", node_level);
    } else {
        printf("O no 2 nao esta presente na arvore\n");
    }

    // Imprimindo a árvore
    printf("Estrutura da arvore em pre-ordem:\n");
    printTree(root);

    return 0;
}

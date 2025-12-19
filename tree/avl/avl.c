#include "avl.h"

int obter_altura(No *N){
    if(N == NULL) return 0;
    return N -> height;
}

int maior(int a, int b){
    if(a > b) return a;
    return b;
}

No* criar_no(int key){
    No* no = (No*) malloc(sizeof(No));

    if(no == NULL) return NULL;

    no -> key = key;
    no -> left = NULL;
    no -> right = NULL;
    no -> height = 1;
    return no;
}


// Rotatação da Nike pura para direita 
// Case (LL)

No* rotacao_right(No *y){
    No *x = y->left;
    No *T2 = x->right;

    x->right = y;
    y->left = T2;

    y -> height = maior(altura(y->left), altura(y->right)) + 1;
    x -> height = maior(altura(x->left), altura(x->right)) + 1;

    return x
}

// Rotatação da Nike pura para esquerda 
// Case (RR)

No* rotacao_left(No *y){
    No *x = y->right;
    No *T2 = x->left;

    x->left = y;
    y->right = T2;

    x -> height = maior(altura(x->left), altura(x->right)) + 1;
    y -> height = maior(altura(y->left), altura(y->right)) + 1;
    
    return x;
}


int obter_balanceamento(No *N){
    if(N == NULL) return 0;
    return altura(N->left) - altura(N->right);
}

// --- INSERÇÃO AVL (Recursiva) ---
No* inserir(No* no, int key) {
    // 1. Inserção normal de BST
    if (no == NULL)
        return(criar_no(key));

    if (key < no->key)
        no->left = inserir(no->left, key);
    else if (key > no->key)
        no->right = inserir(no->right, key);
    else // keys iguais não são permitidas na nossa BST
        return no;

    // 2. Atualizar a altura deste nó ancestral
    no->altura = 1 + maior(altura(no->left), altura(no->right));

    // 3. Obter o fator de balanceamento para verificar se desbalanceou
    int balanceamento = obter_balanceamento(no);

    // 4. Se desbalanceou, existem 4 casos:

    // Caso 1: left-left (LL) -> Rotação Simples à right
    if (balanceamento > 1 && key < no->left->key)
        return rotacao_right(no);

    // Caso 2: right-right (RR) -> Rotação Simples à left
    if (balanceamento < -1 && key > no->right->key)
        return rotacao_left(no);

    // Caso 3: left-right (LR) -> Rotação Dupla (Esq depois Dir)
    if (balanceamento > 1 && key > no->left->key) {
        no->left = rotacao_left(no->left);
        return rotacao_right(no);
    }

    // Caso 4: right-left (RL) -> Rotação Dupla (Dir depois Esq)
    if (balanceamento < -1 && key < no->right->key) {
        no->right = rotacao_right(no->right);
        return rotacao_left(no);
    }

    // Retorna o ponteiro (inalterado se não houve rotação)
    return no;
}
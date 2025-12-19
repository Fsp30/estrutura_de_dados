#include "avl.h"
#include<locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    No *raiz = NULL;


    printf("--- Teste de Arvore AVL ---\n");

    printf("Inserindo 10...\n");
    raiz = inserir(raiz, 10);

    printf("Inserindo 20... (Ainda balanceada)\n");
    raiz = inserir(raiz, 20);

    printf("Inserindo 30... (Desbalanceou RR -> Rotação Esquerda)\n");
    raiz = inserir(raiz, 30);
  

    printf("Inserindo 40...\n");
    raiz = inserir(raiz, 40);

    printf("Inserindo 50... (Desbalanceou RR em 30? Nao, em 20 -> Rotação Esquerda)\n");
    raiz = inserir(raiz, 50);

    printf("Inserindo 25... (Desbalanceou RL no 40 -> Rotação Dupla)\n");
    raiz = inserir(raiz, 25);


    printf("\nPercurso Pre-Ordem da AVL construida:\n");
    printf("Esperado: 30 20 10 25 40 50\n");
    printf("Obtido:   ");
    pre_ordem(raiz);
    printf("\n");

    printf("\nRaiz da arvore: %d (Deve ser 30)\n", raiz->chave);

    return 0;
}

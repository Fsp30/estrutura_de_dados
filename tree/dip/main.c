#include <stdio.h>
#include <stdlib.h>
#include "./tree.h"  
#include "./avl.h"      


int main() {
    Arvore* raiz_bst = inicializa(); 
    NoAvl* raiz_avl = NULL;          

    int N = 1000; 

    printf("--- EXPERIMENTO: BST vs AVL ---\n");
    printf("Inserindo sequencia ordenada de 1 a %d...\n", N);

    for (int i = 1; i <= N; i++) {
        raiz_bst = inserir(raiz_bst, i);     
        raiz_avl = inserir_avl(raiz_avl, i);  
    }

    printf("Insercao concluida.\n\n");

    int h_bst = altura_bst(raiz_bst);

    int h_avl = obter_altura_avl(raiz_avl);

    printf("--- RESULTADOS ---\n");
    printf("Altura Final BST (Degenerada): %d\n", h_bst);
    printf("Altura Final AVL (Balanceada): %d\n", h_avl);

    printf("\n--- ANALISE DE CUSTO DE BUSCA  ---\n");
    printf("Para buscar o numero %d:\n", N);
    printf(" -> Na BST: Voce precisara visitar %d nos (Lento, como uma lista).\n", h_bst);
    printf(" -> Na AVL: Voce precisara visitar apenas %d nos (Muito rapido).\n", h_avl);

    printf("\n--- EXTRAS (BST) ---\n");
    printf("Minimo na BST: %d\n", min_bst(raiz_bst)); 
    printf("Maximo na BST: %d\n", max_bst(raiz_bst)); 

    libera(raiz_bst);

    return 0;
}

#include<stdio.h>
#include<locale.h>
#include "tree.h"


int main() {
    setlocale(LC_ALL, "Portuguese");
   
    Tree* raiz = inicializa();

    printf("--- DEMONSTRACAO DE ÁRVORE BINÁRIA DE BUSCA (BST) ---\n\n");

    
    printf("Inserindo: 50, 30, 20, 40, 70, 60, 80...\n");

    raiz = inserir(raiz, 50);
    raiz = inserir(raiz, 30); 
    raiz = inserir(raiz, 20); 
    raiz = inserir(raiz, 40); 
    raiz = inserir(raiz, 70); 
    raiz = inserir(raiz, 60); 
    raiz = inserir(raiz, 80); 

    printf("\nImpressao Em-Ordem (deve estar ordenado): ");
    imprimeEmOrdem(raiz);
    printf("\n");

    printf("Impressao Pré-Ordem (mostra a estrutura): ");
    imprimeEmPre(raiz);
    printf("\n");

    printf("Impressao Pós-Ordem (Filhos antes): ");
    imprimeEmPos(raiz);
    printf("\n\n");

    int valores_teste[] = {40, 99, 60, 50, 15};

    printf("--- Teste de Busca Binária ---\n");
    for(int i = 0; i < 5; i++) {
        int alvo = valores_teste[i];
        if (buscaBinaria(raiz, alvo)) {
            printf("[OK] O valor %d foi encontrado na árvore.\n", alvo);
        } else {
            printf("[X]  O valor %d NAO foi encontrado na árvore.\n", alvo);
        }
    }

    printf("\nLiberando memória...\n");
    raiz = libera(raiz);

    printf("Árvore liberada com sucesso.\n");

    return 0;
}

#pragma once

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó com campo 'altura'
typedef struct no {
    int chave;
    struct no *esquerda;
    struct no *direita;
    int altura; // Essencial para O(1) no cálculo do FB
} No;

// Criação e Auxiliares
No* criar_no(int chave);
//int altura(No *N);
int maior(int a, int b);
int obter_balanceamento(No *N);

// Rotações
No* rotacao_direita(No *y);
No* rotacao_esquerda(No *x);

// Core
No* inserir(No* no, int chave);
void pre_ordem(No *root); // Para visualizarmos a estrutura


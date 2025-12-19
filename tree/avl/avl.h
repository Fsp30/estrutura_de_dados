#pragma once

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó com campo 'altura'
typedef struct no {
    int key;
    struct no *left;
    struct no *right;
    int height; // Essencial para O(1) no cálculo do FB
} No;

// Criação e Auxiliares
No* criar_no(int key);
int altura(No *N);
int maior(int a, int b);
int obter_balanceamento(No *N);

// Rotações
No* rotacao_right(No *y);
No* rotacao_left(No *x);

// Core
No* inserir(No* no, int key);
void pre_ordem(No *root); // Para visualizarmos a estrutura
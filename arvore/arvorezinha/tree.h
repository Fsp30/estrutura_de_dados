#pragma once

typedef struct tree{
    int info;
    struct tree* sae;
    struct tree* sad;
}Tree;

Tree* inicializar();

Tree* createNo(int n , Tree* sae, Tree *sad);

int estaVazia(Tree* t);

int busca(Tree* t, int n);

Tree* libera(Tree* t);

void imprimePre(Tree* t);
void imprimeEm(Tree* t);
void imprimePos(Tree* t);

int buscaBinaria(Tree* t, int n);

Tree* inserirNo(Tree* t, int n);

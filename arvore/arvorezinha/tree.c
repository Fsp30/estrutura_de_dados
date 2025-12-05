#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Tree* inicializar(){
    return NULL;
};

Tree* createNo(int n , Tree* sae, Tree *sad){
    Tree* t = (Tree*) malloc(sizeof(Tree));
    if(t == NULL){
        printf("Falha ba alocacao");
        return NULL;
    }

    t->info = n;
    t->sae = sae;
    t->sad = sad;

    return t;
}

int estaVazia(Tree* t){
    return t == NULL;
}


int busca(Tree* t, int n){

    if(estaVazia(t)){
        return 0;
    }else{
        if(t->info == n){
            return 1;
        }else{
            if(busca(t->sae, n)){
                return 1;
            }else{
                return busca(t->sad, n);
            }
        }
    }
}



Tree* libera(Tree* t){
    if(!estaVazia(t)){
        libera(t->sae);
        libera(t->sad);
        free(t);
    }
    return NULL;

}



void imprimePre(Tree* t){
    if(!estaVazia(t)){
        printf("|%d|", t->info);
        imprimePre(t->sae);
        imprimePre(t->sad);
    }
}

void imprimeEm(Tree* t){
    if(!estaVazia(t)){
        imprimePre(t->sae);
        printf("|%d|", t->info);
        imprimePre(t->sad);
    }
}
void imprimePos(Tree* t){
    if(!estaVazia(t)){
        imprimePre(t->sae);
        imprimePre(t->sad);
        printf("|%d|", t->info);
    }
}


int buscaBinaria(Tree* t, int n){
    if(!estaVazia(t)){
        if(t->info == n){
            return 1;
        }else{
            if(t->info < n){
                return buscaBinaria(t, n);
            }else{
                if(t->info > n){
                    return buscaBinaria(t,n);
                }
            }
        }
    }
    return 0;
}

Tree* inserirNo(Tree* t, int n){
    if(estaVazia(t)){
        return createNo(n, inicializar(), inicializar());
    }else{
        if(n < t->info){
            t->sae = inserirNo(t->sae, n);
        }
        if(n > t->info){
            t->sad = inserirNo(t->sad, n);
        }
        return t;
    }
}



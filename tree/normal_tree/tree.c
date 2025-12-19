#include "tree.h"
#include <stdlib.h>

Tree* inicializa(){
    return NULL;
}


Tree* criaNo(int n, Tree* left, Tree* right){
    Tree* t = (Tree*) malloc(sizeof(Tree));
    if(t == NULL) return NULL;

    t -> info = n;
    t -> left = left;
    t -> right = right;
    return t;
}

int estaVazia(Tree* t){
    return t == NULL;
}

int busca(Tree*t, int n){
    if(estaVazia(t)) return 0;

    if(t -> info = n){
        return 1;
    }else{
        if(busca(t->left, n)){
            return 1;
        }else{
            busca(t->right, n);
        }
    }
}

Tree* libera(Tree* t){
    if(!estaVazia(t)){
        libera(t -> left);
        libera(t -> right);
        free(t);
    }
    return NULL;
}

void imprimeEmPre(Tree* t){
    if(!estaVazia(t)){
        printf("\n|%d|", t -> info);
        imprimeEmPre(t->left);
        imprimeEmPre(t->right);
    }
}

void imprimeEmOrdem(Tree* t){
    if(!estaVazia(t)){
        imprimeEmOrdem(t->left);
        printf("\n|%d|", t -> info);
        imprimeEmOrdem(t->right);
    }
}

void imprimeEmPos(Tree* t){
    if(!estaVazia(t)){
        imprimeEmPos(t->left);
        imprimeEmPos(t->right);
        printf("\n|%d|", t -> info);
    }
}

int buscaBinaria(Tree*t ,int n){
    if(estaVazia(t)){
        return 0;
    }else{
        if (t->info == n){ 
            return 1;
        }else{
            if (n < t->info){
                return buscaBinaria(t->left, n);
            }else{
                if (n > t->info){
                    return buscaBinaria(t->right, n);
                }
            }
        }
    }
}

Tree* inserir(Tree* t, int n){
    if(estaVazia(t)){
        return criaNo(n, inicializa(), inicializa());
    }else{
        if(n<t->info){
            t->left = inserir(t->left, n);
        }
        if(n>t->info){
            t->right = inserir(t->right, n);
        }

        return t;
    }

}

int maior(int a, int b){
    if(a > b) return a;
    return b;
}

int altura_bst(Tree* t){
    if(t == NULL){
        return 0;
    }

    int h_left = altura_bst(t->left);
    int h_right = altura_bst(t->right);

    return maior(h_left, h_right) + 1;
}

int min_bst(Tree* t){
    if(!estaVazia(t)){
        if(t -> left == NULL){
            return t->info;
        }
        return min_bst(t->left);
    }
}

int max_bst(Tree* t){
    if(!estaVazia(t)){
        if(t->right == NULL){
            return t->info;
        }
        return max_bst(t->right);
    }
}

void imprimir_fator_bal(Tree *t){
    if(t == NULL){
        printf("Arvore inexistente");
        return NULL;
    }

    imprimir_fator_bal(t -> left);

    int h_left = altura_bst(t->left);
    int h_right = altura_bst(t->left);

    int h_total = maior(h_left, h_right) + 1;

    int resultFb = h_left - h_right;

    printf("No: %d | Altura: %d | FB: %d\n", t->info, h_total, resultFb);

    imprimir_fator_bal(t->right);

}
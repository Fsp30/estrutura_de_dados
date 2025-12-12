
#include "binaria.h"
#include<stdio.h>
#include<stdlib.h>

/* cria uma árvore vazia. */
Arvore* inicializa(){
    return NULL;
}

/* cria um nó com a informação, a sae e a sad. */
Arvore* criaNo(int n, Arvore* sae, Arvore* sad){
    Arvore* p = (Arvore*) malloc(sizeof(Arvore));
    p->info = n;
    p->sae = sae;
    p->sad = sad;
    return p;
}

/* verifica se a arvore está vazia. */
int estaVazia(Arvore* a){
    return a == NULL;
}

/* busca pela chave */
int busca(Arvore* a, int n){
    if(estaVazia(a)){
        return 0;
    }else{
        if (a->info == n){
                return 1;
        }else{
            if (busca(a->sae, n)){
                return 1;
            }else{
                return busca(a->sad, n);
            }
        }
    }
}

/* Libera a árvore da memória */
Arvore* libera(Arvore* a){
    if(!estaVazia(a)){
        libera(a->sae); /* libera sae */
        libera(a->sad); /* libera sad */
        free(a); /* libera raiz */
    }
    return NULL;
}

/* imprime todos os nós da árvore em Pre-Ordem. */
void imprimePre(Arvore* a){
    if(!estaVazia(a)){
        printf("%d ", a->info); /* mostra raiz */
        imprimePre(a->sae); /* mostra sae */
        imprimePre(a->sad); /* mostra sad */
    }
}

/* imprime todos os nós da árvore Em-Ordem. */
void imprimeEm(Arvore* a){
    if(!estaVazia(a)){
        imprimeEm(a->sae); /* mostra sae */
        printf("%d ", a->info); /* mostra raiz */
        imprimeEm(a->sad); /* mostra sad */
    }
}

/* imprime todos os nós da árvore em Pos-Ordem. */
void imprimePos(Arvore* a){
    if(!estaVazia(a)){
        imprimePos(a->sae); /* mostra sae */
        imprimePos(a->sad); /* mostra sad */
        printf("%d ", a->info); /* mostra raiz */
    }
}

/* busca pela chave em uma árvore binária */
int buscaBinaria(Arvore* a, int c){
    if(estaVazia(a)){ /* foi até o final e não achou.*/
        return 0;
    }else{
        if (a->info == c){ /* indica que achou.*/
            return 1;
        }else{
            if (c < a->info){
                return buscaBinaria(a->sae, c);
            }else{
                if (c > a->info){
                    return buscaBinaria(a->sad, c);
                }
            }
        }
    }
}

/* insere um novo nó em uma árvore binária */
Arvore* inserir(Arvore* a, int c){
    if (estaVazia(a)){ //achou o ponto correto de inserção
        return criaNo(c, inicializa(), inicializa());
    }else{
        if (c < a->info){
            a->sae = inserir(a->sae, c);
        }
        if (c > a->info){
            a->sad = inserir(a->sad, c);
        }
        return a; //nó a ser inserido já existe, nada muda!
    }
}



int maior(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int altura(Arvore* a){
    if(a == NULL) return 0;
    int altura_sae = altura(a->sae);
    int altura_sad = altura(a->sad);
    return maior(altura_sae, altura_sad) + 1;
}
int min_bst(Arvore* a) {
    if (estaVazia(a)) return -1;

    if (a->sae != NULL) {
        return min_bst(a->sae);
    }
    return a->info;
}


 int max_bst(Arvore* a){
    if(estaVazia(a)) return -1;

    if (a->sad != NULL){
        return max_bst(a->sad);
    }
    return a->info;
 }

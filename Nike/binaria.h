
#pragma once

typedef struct TipoArvore {
    int info;
    struct TipoArvore* sae;
    struct TipoArvore* sad;
} Arvore;

//cria uma árvore vazia
Arvore* inicializa();
//verifica se a arvore está vazia
int estaVazia(Arvore* a);
//cria um nó, dado a informação e as duas subárvores
Arvore* criaNo(int n, Arvore* sae, Arvore* sad);
//libera a estrutura da árvore
Arvore* libera(Arvore* a);
//Determinar se uma informação se encontra ou não na árvore
int busca(Arvore* a, int n);
// imprime todos os nós da árvore em Pre-Ordem.
void imprimePre(Arvore* a);
// imprime todos os nós da árvore Em-Ordem.
void imprimeEm(Arvore* a);
// imprime todos os nós da árvore em Pos-Ordem.
void imprimePos(Arvore* a);
// busca pela chave em uma árvore binária
int buscaBinaria(Arvore* a, int c);
//insere um novo nó em uma árvore binária
Arvore* inserir(Arvore* a, int c);


int altura(Arvore* a);

int maior(int a, int b);

 int min_bst(Arvore* a);

 int max_bst(Arvore* a);


#include "fila_circular.h"
#include <stdio.h>

void FilaCircular_inicializar(FilaCircular *f){
    f -> inicio = 0;
    f -> fim = 0;
    f -> quantidade = 0;
}

int FilaCircular_estaCheia(FilaCircular *f){
    if (f->quantidade != TAMANHO_MAXIMO){
        return 0;
    }
    return 1;
}

int FilaCircular_estaVazia(FilaCircular *f){
    if (f->quantidade != 0){
        return 0;
    }
    return 1;
}

void FilaCircular_enqueue(FilaCircular *f, int valor){
    if(FilaCircular_estaCheia(f) == 1){
        printf("A fila esta cheia");
        return ;
    }

    f -> itens[f -> fim] = valor;
    f -> fim = (f-> fim + 1) % TAMANHO_MAXIMO;
    f -> quantidade++;
}

int FilaCircular_dequeue(FilaCircular *f){
    if(FilaCircular_estaVazia(f) == 1){
        printf("A fila esta vazia");
        return;
    }

    int valor = f ->itens[f->inicio];
    f->inicio = (f->inicio +1 ) % TAMANHO_MAXIMO;
    f -> quantidade--;
    return valor;
}

int FilaCircular_peek(FilaCircular *f){
    if(FilaCircular_estaVazia(f)==1){
        printf("A fila esta vazia");
        return;
    }
    return f->itens[f->inicio];
}

#ifndef FILA_CIRCULAR_H_INCLUDED
#define FILA_CIRCULAR_H_INCLUDED


#define TAMANHO_MAXIMO 50


typedef struct {
    int itens[TAMANHO_MAXIMO];
    int inicio;
    int fim;
    int quantidade;
} FilaCircular;

void FilaCircular_inicializar(FilaCircular *f);
int FilaCircular_estaCheia(FilaCircular *f);
int FilaCircular_estaVazia(FilaCircular *f);
void FilaCircular_enqueue(FilaCircular *f, int valor);
int FilaCircular_dequeue(FilaCircular *f);
int FilaCircular_peek(FilaCircular *f);

#endif

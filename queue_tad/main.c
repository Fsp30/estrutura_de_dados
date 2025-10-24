#include <stdio.h>
#include <locale.h>
#include "fila_circular.h"




int main(){
    FilaCircular f;
    FilaCircular_inicializar(&f);
    FilaCircular_estaCheia(&f);
    FilaCircular_estaVazia(&f);
    FilaCircular_enqueue(&f, 15);
    FilaCircular_dequeue(&f);
    FilaCircular_peek(&f);

    return 0;


}

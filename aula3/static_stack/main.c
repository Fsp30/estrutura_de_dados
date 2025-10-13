#include "stack.h"
#include <stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int* s = create_stack();

    int result = isEmpty(&s);
    printf("%d", *s);

    if (result != 0){
        printf("A pilha não está vazia");
        return 0;
    }

    printf("A pilha está vazia");

    return 0;
}

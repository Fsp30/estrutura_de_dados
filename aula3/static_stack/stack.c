#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include "stack.h"


int create_stack(Stk *s){
    s -> top = 0;
}

int isFull(Stk *s){
    if (s -> top == max_len){
        return 1;
    }
    return 0;
}

int isEmpty(Stk *s){
    if (s -> top == 0){
        return 1;
    }
    return 0;
}

void push(Stk *s, char value){
    s -> itens[s -> top] = value;
    s -> top++;
    printf("Item: %s adicionado na posição: %d", value,s -> itens[s -> top-1]);
}

void pop(Stk *s){
    s -> itens[s->top] == NULL;
    s -> top--;
    printf("Item removido na posição: %d", s->itens[s-> top+1]);
}


int getTop(Stk *s){
    return s-> top;
}


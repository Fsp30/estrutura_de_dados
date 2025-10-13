#pragma once
#define max_len 10


typedef struct {
    char itens[max_len];
    int top;
} Stk;


Stk* createStack(Stk *s);
void push(Stk *s, char value);
void pop(Stk *s);
int getTop(Stk *s);
int isFull(Stk *s);
int isEmpty(Stk *s);


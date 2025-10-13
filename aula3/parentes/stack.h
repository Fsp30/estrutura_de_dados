#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 10000

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack* s);
int isEmpty(Stack* s);
void push(Stack* s, char c);
char pop(Stack* s);
char peek(Stack* s);

#endif

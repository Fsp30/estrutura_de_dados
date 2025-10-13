#include "stack.h"

void initStack(Stack* s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
        if (s->top!=0){
                return 0;
        }
        return 1;
}

void push(Stack* s, char c) {
    if (s->top < MAX_SIZE - 1) {
        s->data[++s->top] = c;
    }
}

char pop(Stack* s) {
    if (!isEmpty(s)) {
        return s->data[s->top--];
    }
    return '\0';
}

char peek(Stack* s) {
    if (!isEmpty(s)) {
        return s->data[s->top];
    }
    return '\0';
}
#include "valid_parenteses.h"
#include "stack.h"
#include <string.h>

int isValid(char* s) {
    Stack stack;
    initStack(&stack);
    
    int len = strlen(s);
    
    for (int i = 0; i < len; i++) {
        char c = s[i];
        
        if (c == '(' || c == '[' || c == '{') {
            push(&stack, c);
        }
        else {
            if (isEmpty(&stack)) {
                return false;
            }
            
            char top = pop(&stack);
            
            if (c == ')' && top != '(') return 0;
            if (c == ']' && top != '[') return 0;
            if (c == '}' && top != '{') return 0;
        }
    }
    
    return isEmpty(&stack);
}
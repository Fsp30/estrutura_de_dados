#include <stdio.h>
#include "valid_parenteses.h"

int main() {
    printf("Test 1 - \"()\": %s\n", isValid("()") ? "true" : "false");
    printf("Test 2 - \"()[]{}\": %s\n", isValid("()[]{}") ? "true" : "false");
    printf("Test 3 - \"(]\": %s\n", isValid("(]") ? "true" : "false");
    printf("Test 4 - \"([])\": %s\n", isValid("([])") ? "true" : "false");
    printf("Test 5 - \"([)]\": %s\n", isValid("([)]") ? "true" : "false");
    
    return 0;
}
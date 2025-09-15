#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    printf("Os cinco primeiros múltiplos de 3:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", 3 * i);
    }
    printf("\n");
    
    return 0;
}




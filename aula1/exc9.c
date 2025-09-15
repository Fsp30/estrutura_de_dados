#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numero = 0;
    
    while (numero <= 100000) {
        printf("%d\n", numero);
        numero += 100;
    }
    
    return 0;
}
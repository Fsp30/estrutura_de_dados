#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int numeros[10];
    int pares = 0, impares = 0, somaPositivos = 0, negativos = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        if (numeros[i] > 0) {
            somaPositivos += numeros[i];
        } else if (numeros[i] < 0) {
            negativos++;
        }
    }
    
    printf("Números pares: %d\n", pares);
    printf("Números ímpares: %d\n", impares);
    printf("Soma dos números positivos: %d\n", somaPositivos);
    printf("Quantidade de números negativos: %d\n", negativos);
    
    return 0;
}
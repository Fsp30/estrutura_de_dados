#include <stdio.h>
#include <locale.h>

long long calcularFatorial(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    
    long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    long long resultado = calcularFatorial(n);
    
    if (resultado == -1) {
        printf("Erro: Número negativo!\n");
    } else {
        printf("O fatorial de %d é: %lld\n", n, resultado);
    }
    
    return 0;
}
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int result = 0, input = 0;

    do {
        printf("----- Digite um valor para soma ou zero para descobrir o resultado -----\nValor: ");
        scanf("%d", &input);
        result += input;
    } while (input != 0);

    printf("\nO resultado das soma de todas as entradas é: %d", result);
    return 0;

}

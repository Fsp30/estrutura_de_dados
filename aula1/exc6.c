#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float result = 0;

    for (int i = 0; i<5; i++){
        float value;
        printf("Digite o %d° valor: ", i+1);
        scanf("%f", &value);
        result += value;
    }
    printf("O valor total da soma é: %.2f", result);
    return 0;

}

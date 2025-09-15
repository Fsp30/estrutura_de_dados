#include <stdio.h>


int main(){
    int a, b, c;
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &a);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &b);
    printf("\nDigite o terceiro valor: ");
    scanf("%d", &c);

    printf("A soma dos quadrados de %d + %d + %d = %d", a, b, c ,a*a+b*b+c*c);
    return 0;

}

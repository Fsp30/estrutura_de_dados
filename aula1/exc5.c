#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int bets[3];
    float award = 10000;
    char name[3][50];
    float total_bets = 0;
    float user_award;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do apostador %d: ", i + 1);
        fgets(name[i], 50, stdin);

        for (int j = 0; j < 50; j++) {
            if (name[i][j] == '\n') {
                name[i][j] = '\0';
                break;
            }
        }

        printf("Qual o valor da sua aposta: ");
        scanf("%d", &bets[i]);
        getchar();
        total_bets += bets[i];
    }

    if (total_bets < award) {
        printf("\nA soma das apostas (%.2f) é menor do que o prêmio total (%.2f).\n\n", total_bets, award);
    }

    printf("--- Distribuição do prêmio ---\n");
    for (int i = 0; i < 3; i++) {
        user_award = (bets[i] / total_bets) * award;
        printf("%s recebeu R$ %.2f dos R$ %.2f disponíveis.\n", name[i], user_award, award);
    }

    return 0;
}

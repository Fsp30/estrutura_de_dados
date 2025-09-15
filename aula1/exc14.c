#include <stdio.h>
#include <locale.h>

struct aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    struct aluno alunos[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i + 1);
        scanf(" %[^\n]", alunos[i].nome);
        
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        
        printf("Curso: ");
        scanf(" %[^\n]", alunos[i].curso);
        
        printf("\n");
    }
    
    printf("Dados dos alunos:\n\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n\n", alunos[i].curso);
    }
    
    return 0;
}
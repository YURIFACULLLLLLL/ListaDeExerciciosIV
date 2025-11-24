#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];

    for(int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome); 
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    printf("\n--- Alunos Cadastrados ---\n");
    for(int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n", alunos[i].nota);
    }

    return 0;
}

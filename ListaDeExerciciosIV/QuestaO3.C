#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];
    int indice;

    for(int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Idade: ");
        scanf("%d", &alunos[i].idade);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
    }

    printf("\nEscolha o índice do aluno (0 a 4) para atualizar a nota: ");
    scanf("%d", &indice);

    printf("Nova nota do aluno %s: ", alunos[indice].nome);
    scanf("%f", &alunos[indice].nota);

    printf("\n--- Dados Atualizados ---\n");
    printf("Nome: %s\n", alunos[indice].nome);
    printf("Idade: %d\n", alunos[indice].idade);
    printf("Nota: %.2f\n", alunos[indice].nota);

    return 0;
}

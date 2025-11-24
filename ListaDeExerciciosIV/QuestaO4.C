#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void exibirAluno(struct Aluno aluno) {
    printf("\nNome: %s\nIdade: %d\nNota: %.2f\n",
           aluno.nome, aluno.idade, aluno.nota);
}

struct Aluno criarAluno() {
    struct Aluno novo;
    printf("Nome: ");
    scanf(" %[^\n]", novo.nome);
    printf("Idade: ");
    scanf("%d", &novo.idade);
    printf("Nota: ");
    scanf("%f", &novo.nota);
    return novo;
}

int main() {
    struct Aluno alunos[4];
    int quantidade = 0;
    int opcao, indice;

    do {
        printf("\n--- MENU ---\n");
        printf("1 - Cadastrar aluno\n");
        printf("2 - Remover aluno\n");
        printf("3 - Exibir alunos\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                if (quantidade < 4) {
                    alunos[quantidade] = criarAluno();
                    quantidade++;
                } else {
                    printf("Limite de alunos atingido!\n");
                }
                break;

            case 2:
                printf("Informe o indice do aluno (0 a %d): ", quantidade - 1);
                scanf("%d", &indice);

                if (indice >= 0 && indice < quantidade) {
                    for(int i = indice; i < quantidade - 1; i++) {
                        alunos[i] = alunos[i + 1];
                    }
                    quantidade--;
                    printf("Aluno removido com sucesso!\n");
                } else {
                    printf("Índice inválido!\n");
                }
                break;

            case 3:
                if (quantidade == 0) {
                    printf("Nenhum aluno cadastrado.\n");
                } else {
                    for(int i = 0; i < quantidade; i++) {
                        printf("\nAluno %d:\n", i);
                        exibirAluno(alunos[i]);
                    }
                }
                break;

            case 0:
                printf("Encerrando...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 0);

    return 0;
}

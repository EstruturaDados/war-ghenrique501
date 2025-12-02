#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    struct Territorio territorios[5]; // Vetor para armazenar 5 territórios

    // Cadastro dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do território %d: ", i+1);
        scanf("%s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
    }

    // Exibição dos dados cadastrados
    printf("\n--- Dados dos Territórios ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i+1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}

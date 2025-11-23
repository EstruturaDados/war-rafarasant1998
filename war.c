// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO - Nível Novato
// ============================================================================
//
// ============================================================================
//
// REQUISITOS FUNCIONAIS:
//
// - Criar uma struct chamada Territorio contendo:
//      • char nome[30]
//      • char cor[10]
//      • int tropas
//
// - Permitir o cadastro de 5 territórios pelo usuário,
//   solicitando nome, cor do exército e quantidade de tropas.
//
// - Utilizar um laço para preencher os dados dos cinco territórios.
//
// - Após o cadastro, exibir todas as informações registradas,
//   apresentando os dados de forma clara e organizada.
//
// ============================================================================
//

#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    - Armazena nome, cor do exército e número de tropas.
    - Representa um território do sistema.
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {

    // Vetor de structs para armazenar 5 territórios
    Territorio territorios[5];

    printf("==== Cadastro de Territorios ====\n\n");

    // Laço para preencher dados dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do Territorio %d:\n", i + 1);

    // Entrada do nome
    printf("Digite o nome do território: ");
    fgets(territorios[i].nome, 30, stdin);
    territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        // Entrada da cor
       printf("Digite a cor do exército: ");
       fgets(territorios[i].cor, 10, stdin);
       territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';


        // Entrada do número de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // remove o \n

        printf("------------------------------------\n");
    }

    //Exibição dos dados
    printf("==== Territorios Registrados ====\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------------\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Cidades\n");

    // Declaração de dados
    char Cidade1[] = "São Paulo";
    char Cidade2[] = "Bahia";

    int populacaoCidade1 = 45;  // Em milhões
    int populacaoCidade2 = 14; // Em milhões

    int areaCidade1 = 24821948;   // Em km²
    int areaCidade2 = 567295;     // Em km²

    int pibCidade1 = 2719751;     // Em bilhões de reais
    int pibCidade2 = 352618;      // Em bilhões de reais

    // Cálculo do PIB per capita
    float pibPerCapitaCidade1 = (float)pibCidade1 / populacaoCidade1;
    float pibPerCapitaCidade2 = (float)pibCidade2 / populacaoCidade2;

    // Cálculo da densidade populacional
    float densidadeCidade1 = (float)(populacaoCidade1 * 1000000) / areaCidade1;
    float densidadeCidade2 = (float)(populacaoCidade2 * 1000000) / areaCidade2;

    // Mostrar as opções para o jogador
    printf("\nEscolha um atributo para competir entre %s e %s:\n", Cidade1, Cidade2);
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per capita\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Switch para menus
    switch (escolha) {
        case 1: // Comparação de População
            if (populacaoCidade1 > populacaoCidade2) {
                printf("%s vence em população!\n", Cidade1);
            } else if (populacaoCidade1 < populacaoCidade2) {
                printf("%s vence em população!\n", Cidade2);
            } else {
                printf("Empate em população!\n");
            }
            break;

        case 2: // Comparação de Área
            if (areaCidade1 > areaCidade2) {
                printf("%s vence em área!\n", Cidade1);
            } else if (areaCidade1 < areaCidade2) {
                printf("%s vence em área!\n", Cidade2);
            } else {
                printf("Empate em área!\n");
            }
            break;

        case 3: // Comparação de PIB
            if (pibCidade1 > pibCidade2) {
                printf("%s vence em PIB!\n", Cidade1);
            } else if (pibCidade1 < pibCidade2) {
                printf("%s vence em PIB!\n", Cidade2);
            } else {
                printf("Empate em PIB!\n");
            }
            break;

        case 4: // Comparação de PIB per capita
            if (pibPerCapitaCidade1 > pibPerCapitaCidade2) {
                printf("%s vence em PIB per capita!\n", Cidade1);
            } else if (pibPerCapitaCidade1 < pibPerCapitaCidade2) {
                printf("%s vence em PIB per capita!\n", Cidade2);
            } else {
                printf("Empate em PIB per capita!\n");
            }
            break;

        case 5: // Comparação de Densidade Populacional
            if (densidadeCidade1 > densidadeCidade2) {
                printf("%s vence em densidade populacional!\n", Cidade1);
            } else if (densidadeCidade1 < densidadeCidade2) {
                printf("%s vence em densidade populacional!\n", Cidade2);
            } else {
                printf("Empate em densidade populacional!\n");
            }
            break;

        case 6: // Sair
            printf("Encerrando o programa. Obrigado por jogar!\n");
            return 0;

        default: // Entrada inválida
            printf("Opção inválida! Escolha entre 1 e 6.\n");
            break;
    }
}

return 0;
}
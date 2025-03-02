#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Países\n");

    // Declaração de dados
    char pais1[] = "Rússia";
    char pais2[] = "Ucrânia";

    int populacaopais1 = 143;  // Em milhões
    int populacaopais2 = 37;  // Em milhões

    int areapais1 = 17100000; // Em km²
    int areapais2 = 603628;   // Em km²

    int pibpais1 = 2021;      // Em bilhões de dólares
    int pibpais2 = 1788;      // Em bilhões de dólares

    int pontoshistoricospais1 = 42;     
    int pontoshistoricospais2 = 51;      

    // Cálculo do PIB per capita
    float pibPerCapitapais1 = (float)pibpais1 / populacaopais1;
    float pibPerCapitapais2 = (float)pibpais2 / populacaopais2;

    // Cálculo da densidade populacional
    float densidadepais1 = (float)(populacaopais1 * 1000000) / areapais1;
    float densidadepais2 = (float)(populacaopais2 * 1000000) / areapais2;

    int escolha;

    // Mostrar as opções para o jogador
    while (1) { // Loop para continuar até o jogador escolher sair
        printf("\nEscolha um atributo para competir entre %s e %s:\n", pais1, pais2);
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos históricos\n");
        printf("5 - PIB per capita\n");
        printf("6 - Densidade populacional\n");
        printf("7 - Regras do jogo\n");
        printf("8 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        // Switch para menus
        switch (escolha) {
            case 1: // Comparação de População
                if (populacaopais1 > populacaopais2) {
                    printf("%s vence em população!\n", pais1);
                } else if (populacaopais1 < populacaopais2) {
                    printf("%s vence em população!\n", pais2);
                } else {
                    printf("Empate em população!\n");
                }
                break;

            case 2: // Comparação de Área
                if (areapais1 > areapais2) {
                    printf("%s vence em área!\n", pais1);
                } else if (areapais1 < areapais2) {
                    printf("%s vence em área!\n", pais2);
                } else {
                    printf("Empate em área!\n");
                }
                break;

            case 3: // Comparação de PIB
                if (pibpais1 > pibpais2) {
                    printf("%s vence em PIB!\n", pais1);
                } else if (pibpais1 < pibpais2) {
                    printf("%s vence em PIB!\n", pais2);
                } else {
                    printf("Empate em PIB!\n");
                }
                break;

            case 4: // Comparação de Pontos históricos
                if (pontoshistoricospais1 > pontoshistoricospais2) {
                    printf("%s vence em Pontos históricos!\n", pais1);
                } else if (pontoshistoricospais1 < pontoshistoricospais2) {
                    printf("%s vence em Pontos históricos!\n", pais2);
                } else {
                    printf("Empate em Pontos históricos!\n");
                }
                break;

            case 5: // Comparação de PIB per capita
                if (pibPerCapitapais1 > pibPerCapitapais2) {
                    printf("%s vence em PIB per capita!\n", pais1);
                } else if (pibPerCapitapais1 < pibPerCapitapais2) {
                    printf("%s vence em PIB per capita!\n", pais2);
                } else {
                    printf("Empate em PIB per capita!\n");
                }
                break;

            case 6: // Comparação de Densidade Populacional
                if (densidadepais1 > densidadepais2) {
                    printf("%s vence em densidade populacional!\n", pais1);
                } else if (densidadepais1 < densidadepais2) {
                    printf("%s vence em densidade populacional!\n", pais2);
                } else {
                    printf("Empate em densidade populacional!\n");
                }
                break;

            case 7: // Regras do jogo
                printf("\nRegras do Jogo:\n");
                printf("1. Escolha um atributo para competir.\n");
                printf("2. O país com o maior valor no atributo vence, exceto na densidade populacional.\n");
                printf("3. Caso os valores sejam iguais, ocorre um empate.\n");
                break;

            case 8: // Sair
                printf("Encerrando o programa. Obrigado por jogar!\n");
                return 0;

            default: // Entrada inválida
                printf("Opção inválida! Escolha entre 1 e 8.\n");
                break;
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo - Cidades\n");
    char Cidade1[] = "Sao Paulo";
    char Cidade2[] = "Bahia";

    int populacaoCidade1 = 45;  // Em milhões
    int populacaoCidade2 = 14;   // Em milhões

    int areaCidade1 = 24821948;   // Em km²
    int areaCidade2 = 567295;   // Em km²

    int pibCidade1 = 2719751;       // Em bilhões de reais
    int pibCidade2 = 352618;       // Em bilhões de reais

    // Cálculo do PIB per capita
    float pibPerCapitaCidade1 = (float)pibCidade1 / populacaoCidade1;
    float pibPerCapitaCidade2 = (float)pibCidade2 / populacaoCidade2;

    // Cálculo da densidade populacional
    float densidadeCidade1 = (float)(populacaoCidade1 * 1000000) / areaCidade1;
    float densidadeCidade2 = (float)(populacaoCidade2 * 1000000) / areaCidade2;

    // Exibir os resultados
    printf("\nCidade: %s\n", Cidade1);
    printf("PIB: %d bilhões de reais\n", pibCidade1);
    printf("População: %d milhões\n", populacaoCidade1);
    printf("Área: %d km²\n", areaCidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCidade1);
    printf("Densidade populacional: %.2f habitantes por km²\n\n", densidadeCidade1);

    printf("Cidade: %s\n", Cidade2);
    printf("PIB: %d bilhões de reais\n", pibCidade2);
    printf("População: %d milhões\n", populacaoCidade2);
    printf("Área: %d km²\n", areaCidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapitaCidade2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidadeCidade2);

    return 0;
}
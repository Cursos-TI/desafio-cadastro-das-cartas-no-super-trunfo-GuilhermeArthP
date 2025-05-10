#include <stdio.h>

int main() {
    // variaveis carta 1
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Carta 1\n");

    printf("Estado (A-H):\n");
    scanf(" %c", &estado1);  

    printf("Código da Carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade1);  

    printf("População:\n");
    scanf("%d", &populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos1);
// 
    printf("Carta 2\n");

    printf("Estado (A-H):\n");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B03):\n");
    scanf("%s", codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %s", nomeCidade2);

    printf("População:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:\n");
    scanf("%d", &pontos_turisticos2);

    // Informações cadastradas
    printf("\nSuas Cartas\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População:%d\n", populacao1);
    printf("Área:%f km²\n", area1);
    printf("PIB:%f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%f km²\n", area2);
    printf("PIB:%f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}
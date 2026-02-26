#include <stdio.h>
#include <string.h>
 
int main() {
    char estado1, estado2, cod1[4], cod2[4], nome1[50], nome2[50];
    int turismo1, turismo2;
    float populacao1, populacao2, area1, area2, pib1, pib2, densidade1, densidade2, pibpcapita1, pibpcapita2, pibbilhao1, pibbilhao2;

//Dados da Carta 1

    printf("Insira os dados da Carta 1\n");
    printf("Letra do seu estado: ");
    scanf("%c", &estado1);
    printf("Código da sua carta: ");
    scanf("%s", &cod1);
    getchar(); //usado para apagar o \n guardado no buffer
    printf("Nome da sua cidade: ");
    fgets(nome1, sizeof(nome1), stdin); //reconhecer o espaço entre as palavras
    nome1[strcspn(nome1, "\n")] = 0; //remove o \n final
    printf("Número de habitantes da cidade: ");
    scanf("%f", &populacao1);
    printf("Área da cidade: ");
    scanf("%f", &area1);
    printf("PIB da cidade: ");
    scanf("%f", &pib1);
    printf("N° de pontos turísticos da cidade: ");
    scanf("%d", &turismo1);

//Dados da Carta 2

    printf("\nInsira os dados da Carta 2\n");
    getchar(); //usado para apagar o \n guardado no buffer
    printf("Letra do seu estado: ");
    scanf("%c", &estado2);
    printf("Código da sua carta: ");
    scanf("%s", &cod2);
    getchar(); //usado para apagar o \n guardado no buffer
    printf("Nome da sua cidade: ");
    fgets(nome2, sizeof(nome2), stdin); //reconhecer o espaço entre as palavras
    nome2[strcspn(nome2, "\n")] = 0; //remove o \n final
    printf("Número de habitantes da cidade: ");
    scanf("%f", &populacao2);
    printf("Área da cidade: ");
    scanf("%f", &area2);
    printf("PIB da cidade: ");
    scanf("%f", &pib2);
    printf("N° de pontos turísticos da cidade: ");
    scanf("%d", &turismo2);

//Calculo da densidade populacional

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

//Calculo do pib per capita

    //converte o pib para bilhão antes de fazer o cálculo
    pibbilhao1 = pib1 * 1e9;
    pibbilhao2 = pib2 * 1e9;

    pibpcapita1 = pibbilhao1 / populacao1;
    pibpcapita2 = pibbilhao2 / populacao2;

//Print da Carta 1

    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódido: %s", cod1);
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %.0f", populacao1);
    printf("\nÁrea: %.2f km²", area1);
    printf("\nPIB: R$ %.2f bilhões", pib1);
    printf("\nN° de pontos de turísticos: %d", turismo1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade1);
    printf("\nPIB per Capita: R$ %.2f \n", pibpcapita1);

//Print da Carta 2

    printf("\nCarta 2:");
    printf("\nEstado: %c", estado2);
    printf("\nCódido: %s", cod2);
    printf("\nNome da Cidade: %s", nome2);
    printf("\nPopulação: %.0f", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: R$ %.2f bilhões", pib2);
    printf("\nN° de pontos de turísticos: %d", turismo2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: R$ %.2f", pibpcapita2);

    return 0;
}
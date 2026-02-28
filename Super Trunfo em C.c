#include <stdio.h>
#include <string.h>
 
int main() {
    char estado1, estado2, cod1[4], cod2[4], nome1[50], nome2[50];
    int turismo1, turismo2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpcapita1, pibpcapita2, pibbilhao1, pibbilhao2, densinverso1, densinverso2, super1, super2;
    unsigned long int populacao1, populacao2;

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
    scanf("%lu", &populacao1);
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
    scanf("%lu", &populacao2);
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

//Calculo do super poder

    //calcula usando o inverso da densidade populacional
    densinverso1 = 1 / densidade1;
    densinverso2 = 1 / densidade2;

    super1 = populacao1 + area1 + pib1 + turismo1 + pibpcapita1 + densinverso1;
    super2 = populacao2 + area2 + pib2 + turismo2 + pibpcapita2 + densinverso2;

//Print da Carta 1

    printf("\nCarta 1:");
    printf("\nEstado: %c", estado1);
    printf("\nCódido: %s", cod1); 
    printf("\nNome da Cidade: %s", nome1);
    printf("\nPopulação: %lu", populacao1);
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
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f km²", area2);
    printf("\nPIB: R$ %.2f bilhões", pib2);
    printf("\nN° de pontos de turísticos: %d", turismo2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: R$ %.2f \n", pibpcapita2);

//Resultado da comparações

    printf("\nResultado das Comparações: n° 1 caso a Carta 1 seja a vencedora e n° 0 caso a Carta 2 seja a vencedora");
    printf("\nPopulação: %d", (populacao1 > populacao2));
    printf("\nÁrea: %d", (area1 > area2));
    printf("\nPIB: %d", (pib1 > pib2));
    printf("\nPontos de turísticos: %d", (turismo1 > turismo2));
    printf("\nDensidade Populacional: %d", (densidade1 < densidade2));
    printf("\nPIB per Capita: %d", (pibpcapita1 > pibpcapita2));
    printf("\nSuper Poder: %d", (super1 > super2));

    return 0;
}
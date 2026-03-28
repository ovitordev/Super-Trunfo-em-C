#include <stdio.h>
#include <string.h>
 
int main() {
    char estado1, estado2, cod1[4], cod2[4], nome1[50], nome2[50], nomeAtrb1[50], nomeAtrb2[50];
    int turismo1, turismo2, opcao1, opcao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpcapita1, pibpcapita2, pibbilhao1, pibbilhao2, somaAtrb1, somaAtrb2, atributoA1, atributoA2, atributoB1, atributoB2;
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

//Interface utilizando switch e if-else para que o usuário escolha qual atributo comparar

    printf("\nComparação das Cartas:");
    printf("\nEscolha o primeiro atributo que você deseja comparar.");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - N° de pontos de turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - PIB per Capita");
    printf("\nQual a sua opção: ");
    scanf("%d", &opcao1);

//Estrutura de escolha do primeiro atributo utilizando switch e if-else

    switch (opcao1)
    {
    case 1:
        printf("\nComparando População:");
        printf("\nCarta 1 (%s): %lu  X  Carta 2 (%s): %lu", nome1, populacao1, nome2, populacao2);
        if (populacao1 > populacao2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (populacao1 == populacao2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = populacao1; //salvando a opção selecionada
        atributoB1 = populacao2;
        strcpy(nomeAtrb1, "População"); //salvando o nome
        break;
    case 2:
        printf("\nComparando Área:");
        printf("\nCarta 1 (%s): %.2f km²  X  Carta 2 (%s): %.2f km²", nome1, area1, nome2, area2);
        if (area1 > area2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (area1 == area2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = area1;
        atributoB1 = area2;
        strcpy(nomeAtrb1, "Área");
        break;
    case 3:
        printf("\nComparando PIB:");
        printf("\nCarta 1 (%s): R$ %.2f bilhões  X  Carta 2 (%s): R$ %.2f bilhões", nome1, pib1, nome2, pib2);
        if (pib1 > pib2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (pib1 == pib2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = pib1;
        atributoB1 = pib2;
        strcpy(nomeAtrb1, "PIB");
        break;
    case 4:
        printf("\nComparando N° de pontos de turísticos:");
        printf("\nCarta 1 (%s): %d  X  Carta 2 (%s): %d", nome1, turismo1, nome2, turismo2);
        if (turismo1 > turismo2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (turismo1 == turismo2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = turismo1;
        atributoB1 = turismo2;
        strcpy(nomeAtrb1, "N° de Pontos de Turísticos");
        break;
    case 5:
        printf("\nComparando Densidade Populacional:");
        printf("\nCarta 1 (%s): %.2f hab/km²  X  Carta 2 (%s): %.2f hab/km²", nome1, densidade1, nome2, densidade2);
        if (densidade1 < densidade2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (densidade1 == densidade2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = densidade1;
        atributoB1 = densidade2;
        strcpy(nomeAtrb1, "Densidade Populacional");
        break;
    case 6:
        printf("\nComparando PIB per Capita:");
        printf("\nCarta 1 (%s): R$ %.2f  X  Carta 2 (%s): R$ %.2f", nome1, pibpcapita1, nome2, pibpcapita2);
        if (pibpcapita1 > pibpcapita2)
        {
            printf("\nResultado: Carta 1 venceu!");
        }else if (pibpcapita1 == pibpcapita2)
        {
            printf("\nResultado: Carta 1 e Carta 2 empataram.");
        }else{
            printf("\nResultado: Carta 2 venceu!");
        }
        atributoA1 = pibpcapita1;
        atributoB1 = pibpcapita2;
        strcpy(nomeAtrb1, "PIB per Capita");
        break;
    default:
        printf("Escolha um número válido!");
    }

//Estrutura de escolha do segundo atributo utilizando switch e if-else

    printf("\n\nComparação das Cartas:");
    printf("\nEscolha o segundo atributo que você deseja comparar.");
    printf("\nO ATRIBUTO DEVE SER DIFERENTE DO ANTERIOR!");
    printf("\n1 - População");
    printf("\n2 - Área");
    printf("\n3 - PIB");
    printf("\n4 - N° de pontos de turísticos");
    printf("\n5 - Densidade Populacional");
    printf("\n6 - PIB per Capita");
    printf("\nQual deseja comparar: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("\nVocê deve selecionar atributos diferentes!");
    }else{
        switch (opcao2)
        {
        case 1:
            printf("\nComparando População:");
            printf("\nCarta 1 (%s): %lu  X  Carta 2 (%s): %lu", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (populacao1 == populacao2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = populacao1;
            atributoB2 = populacao2;
            strcpy(nomeAtrb2, "População");
            break;
        case 2:
            printf("\nComparando Área:");
            printf("\nCarta 1 (%s): %.2f km²  X  Carta 2 (%s): %.2f km²", nome1, area1, nome2, area2);
            if (area1 > area2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (area1 == area2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = area1;
            atributoB2 = area2;
            strcpy(nomeAtrb2, "Área");
            break;
        case 3:
            printf("\nComparando PIB:");
            printf("\nCarta 1 (%s): R$ %.2f bilhões  X  Carta 2 (%s): R$ %.2f bilhões", nome1, pib1, nome2, pib2);
            if (pib1 > pib2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (pib1 == pib2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = pib1;
            atributoB2 = pib2;
            strcpy(nomeAtrb2, "PIB");
            break;
        case 4:
            printf("\nComparando N° de pontos de turísticos:");
            printf("\nCarta 1 (%s): %d  X  Carta 2 (%s): %d", nome1, turismo1, nome2, turismo2);
            if (turismo1 > turismo2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (turismo1 == turismo2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = turismo1;
            atributoB2 = turismo2;
            strcpy(nomeAtrb2, "N° de Pontos de Turísticos");
            break;
        case 5:
            printf("\nComparando Densidade Populacional:");
            printf("\nCarta 1 (%s): %.2f hab/km²  X  Carta 2 (%s): %.2f hab/km²", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (densidade1 == densidade2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = densidade1;
            atributoB2 = densidade2;
            strcpy(nomeAtrb2, "Densidade Populacional");
            break;
        case 6:
            printf("\nComparando PIB per Capita:");
            printf("\nCarta 1 (%s): R$ %.2f  X  Carta 2 (%s): R$ %.2f", nome1, pibpcapita1, nome2, pibpcapita2);
            if (pibpcapita1 > pibpcapita2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (pibpcapita1 == pibpcapita2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }
            atributoA2 = pibpcapita1;
            atributoB2 = pibpcapita2;
            strcpy(nomeAtrb2, "PIB per Capita");
            break;
        default:
            printf("Escolha um número válido!");
        }
    }

//Soma os atributos para apresentar no final

    somaAtrb1 = atributoA1 + atributoA2;
    somaAtrb2 = atributoB1 + atributoB2;

    printf("\n\nSomando os Atributos das Cartas:");
    printf("\n1° Atributo %s: Carta 1 (%s) %.f  X  Carta 2 (%s) %.f", nomeAtrb1, nome1, atributoA1, nome2, atributoB1);
    printf("\n2° Atributo %s: Carta 1 (%s) %.f  X  Carta 2 (%s) %.f", nomeAtrb2, nome1, atributoA2, nome2, atributoB2);
    printf("\nResultado da soma: Carta 1 = %.f  X  Carta 2 = %.f", somaAtrb1, somaAtrb2);

    printf("\n\nComparando as Somas dos Atributos:");
            printf("\nCarta 1: %.f  X  Carta 2: %.f", somaAtrb1, somaAtrb2);
            if (somaAtrb1 > somaAtrb2)
            {
                printf("\nResultado: Carta 1 venceu!");
            }else if (somaAtrb1 == somaAtrb2)
            {
                printf("\nResultado: Carta 1 e Carta 2 empataram.");
            }else{
                printf("\nResultado: Carta 2 venceu!");
            }

    return 0;
}
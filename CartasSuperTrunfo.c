#include <stdio.h>
#include <stdlib.h>

// Desafio Desenvolvendo a Lógica do Jogo Super Trunfo - Nível NOVATO

int main() {
    
    //Variáveis carta 1:

    char estado1='a';
    char codigodacarta1[20]="aaa";
    char cidade1[20]="aaa";
    unsigned long int populacao1=0;
    float area1=0.0;
    float pib1=0.0;
    int pontosturisticos1=0;
    float denpop1=0.0;
    float pibpercapita1=0.0;

    //Variáveis carta 2:

    char estado2='a';
    char codigodacarta2[20]="aaa";
    char cidade2[20]="aaa";
    unsigned long int populacao2=0;
    float area2=0.0;
    float pib2=0.0;
    int pontosturisticos2=0;
    float denpop2=0.0;
    float pibpercapita2=0.0;

    //Apresentação do Jogo:

    printf ("Seja bem vindo(a) ao jogo Super Trunfo!\n\n");
    printf ("Para prosseguir realize o cadastro das cartas: \n\n");

    //Cadastro Carta 1:

    printf ("Cadastro Carta 1:\n\n");

    printf ("Escolha um Estado para jogar: ");
    printf ("A - Parana B - Bahia\n");
    scanf ("%c", &estado1);

    printf ("\nInsira o Codigo da Carta: ");
    scanf ("%s", &codigodacarta1);

    printf ("Insira a Cidade: ");
    scanf ("%s", &cidade1);

    printf ("Insira a Populacao: ");
    scanf ("%lu", &populacao1);

    printf ("Insira a Area em Km2: ");
    scanf ("%f", &area1);

    printf ("Insira o PIB (em bilhões): ");
    scanf ("%f", &pib1);

    printf ("Insira a quantidade de Pontos Turisticos: ");
    scanf ("%d", &pontosturisticos1);

    //Cadastro Carta 2:

    printf ("\nCadastro Carta 2\n\n");

    printf ("Escolha um Estado para jogar: ");
    printf ("A - Parana B - Bahia\n");
    scanf (" %c", &estado2);

    printf ("\nInsira o Codigo da Carta: ");
    scanf ("%s", &codigodacarta2);

    printf ("Insira a Cidade: ");
    scanf ("%s", &cidade2);

    printf ("Insira a Populacao: ");
    scanf ("%lu", &populacao2);

    printf ("Insira a Area em Km2: ");
    scanf ("%f", &area2);

    printf ("Insira o PIB (em bilhões): ");
    scanf ("%f", &pib2);

    printf ("Insira a quantidade de Pontos Turisticos: ");
    scanf ("%d", &pontosturisticos2);

        //Calculos da Densidade Populacional e Pib Per Capita:

        denpop1=(float)populacao1/area1;
        pibpercapita1=pib1/(float)populacao1;

        denpop2=(float)populacao2/area2;
        pibpercapita2=pib2/(float)populacao2;

    //Impressão das Cartas Escolhidas:

    printf ("\nAs cartas escolhidas foram:\n\n");

    //Carta 1

    printf ("Carta 1:\n\n");

    printf ("Estado: %c\n", estado1);
    printf ("Codigo da Carta: %s\n", codigodacarta1);
    printf ("Cidade: %s\n", cidade1);
    printf ("Populacao: %lu\n", populacao1);
    printf ("Area: %.3f km²\n", area1);
    printf ("PIB: %.3f bilhoes de reais\n", pib1);
    printf ("Numero de Pontos Turisticos: %d\n", pontosturisticos1);
    printf ("Desidade Populacional: %.2f hab/km²\n", denpop1);
    printf ("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    //Carta 2

    printf ("Carta 2:\n\n");

    printf ("Estado: %c\n", estado2);
    printf ("Codigo da Carta: %s\n", codigodacarta2);
    printf ("Cidade: %s\n", cidade2);
    printf ("Populacao: %lu\n", populacao2);
    printf ("Area: %.3f km²\n", area2);
    printf ("PIB: %.3f bilhoes de reais\n", pib2);
    printf ("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf ("PIB per Capita: %.2f reais\n\n", pibpercapita2);

    //Soma dos Atributos das Cartas - Cálculo do Super Poder

    float superPoder1, superPoder2;

    superPoder1 = 1/denpop1 + (float) populacao1 + area1 + pib1 + (float) pontosturisticos1 + pibpercapita1;
    superPoder2 = 1/denpop2 + (float) populacao2 + area2 + pib2 + (float) pontosturisticos2 + pibpercapita2;

    /* Comparação das Cartas (Cadastro das Cartas no Super Trunfo)

    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDenpop;
    int resultadoPibPerCapita;
    int resultadoSuperPoder;

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
    resultadoDenpop = denpop1 < denpop2;
    resultadoPibPerCapita = pibpercapita1 > pibpercapita2;
    resultadoSuperPoder = superPoder1 > superPoder2;

    //Impressão da Comparação das Cartas e a carta vencedora

    printf ("Comparação de Cartas:\n");
    printf ("1 - Carta 1 Vencedora\n");
    printf ("0 - Carta 2 Vencedora\n\n");
    printf ("População: %d\n", resultadoPopulacao);
    printf ("Área: %d\n", resultadoArea);
    printf ("PIB: %d\n", resultadoPib);
    printf ("Pontos Turísticos: %d\n", resultadoPontosTuristicos);
    printf ("Densidade Populacional: %d\n", resultadoDenpop);
    printf ("PIB per Capita: %d\n", resultadoPibPerCapita);
    printf ("Super Poder: %d\n\n", resultadoSuperPoder); */

    //Comparação das Cartas

    printf ("Comparação de Cartas (Atributo: Populacao):\n\n");
    printf ("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf ("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf ("Resultado: Carta 1 %s venceu\n\n", cidade1);

    } else {
        printf ("Resultado: Carta 2 %s venceu!\n\n", cidade2);
    }



		system("pause");
    	return 0;
}
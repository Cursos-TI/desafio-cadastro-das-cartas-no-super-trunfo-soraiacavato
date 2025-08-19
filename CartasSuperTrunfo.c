#include <stdio.h>
#include <stdlib.h>

// Desafio Cadastro das Cartas no Super Trunfo - Nível AVENTUREIRO

int main() {
    
    //Variáveis carta 1:

    char estado1='a';
    char codigodacarta1[20]="aaa";
    char cidade1[20]="aaa";
    int populacao1=0;
    float area1=0.0;
    float pib1=0.0;
    int pontosturisticos1=0;
    float denpop1=0.0;
    float pibpercapita1=0.0;

    //Variáveis carta 2:

    char estado2='a';
    char codigodacarta2[20]="aaa";
    char cidade2[20]="aaa";
    int populacao2=0;
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
    scanf ("%d", &populacao1);

    printf ("Insira a Area em Km2: ");
    scanf ("%f", &area1);

    printf ("Insira o PIB: ");
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
    scanf ("%d", &populacao2);

    printf ("Insira a Area em Km2: ");
    scanf ("%f", &area2);

    printf ("Insira o PIB: ");
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
    printf ("Populacao: %d\n", populacao1);
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
    printf ("Populacao: %d\n", populacao2);
    printf ("Area: %.3f km²\n", area2);
    printf ("PIB: %.3f bilhoes de reais\n", pib2);
    printf ("Numero de Pontos Turisticos: %d\n", pontosturisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf ("PIB per Capita: %.2f reais\n\n", pib2);

		system("pause");
    	return 0;
}
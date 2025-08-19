#include <stdio.h>

// Desafio Cadastro das Cartas no Super Trunfo - Nível NOVATO

int main() {
    
    //Variáveis carta 1:

    char estado1='a';
    char codigodacarta1[3]="";
    char cidade1[20]="";
    int populacao1=0;
    float area1;
    float pib1;
    int pontosturisticos1=0;
    float denpop1;
    float pibpercapita1;

    //Variáveis carta 2:

    char estado2='a';
    char codigodacarta2[3]="";
    char cidade2[20]="";
    int populacao2=0;
    float area2;
    float pib2;
    int pontosturisticos2=0;
    float denpop2;
    float pibpercapita2;

    //Apresentação do Jogo:

    printf ("Seja bem vindo(a) ao jogo Super Trunfo!\n\n");
    printf ("Para prosseguir realize o cadastro das cartas: \n\n");

    //Cadastro Carta 1:

    printf ("Cadastro Carta 1\n\n");

    printf ("Escolha um Estado para jogar: \n");
    printf ("A - Paraná\nB - Bahia\n");
    scanf ("%c", &estado1);

    printf ("\nInsira o Código da Carta: ");
    scanf ("%s", &codigodacarta1);

    printf ("Insira a Cidade: ");
    scanf ("%s", &cidade1);

    printf ("Insira a População: ");
    scanf ("%d", &populacao1);

    printf ("Insira a Área em Km2: ");
    scanf ("%f", &area1);

    printf ("Insira o PIB: ");
    scanf ("%f", &pib1);

    printf ("Insira a quantidade de Pontos Turísticos: ");
    scanf ("%d", &pontosturisticos1);

    //Cadastro Carta 2:

    printf ("\nCadastro Carta 2\n\n");

    printf ("Escolha um Estado para jogar: \n");
    printf ("A - Paraná\nB - Bahia ");
    scanf ("%c", &estado2);

    printf ("\nInsira o Código da Carta: ");
    scanf ("%s", &codigodacarta2);

    printf ("Insira a Cidade: ");
    scanf ("%s", &cidade2);

    printf ("Insira a População: ");
    scanf ("%d", &populacao2);

    printf ("Insira a Área em Km2: ");
    scanf ("%f", &area2);

    printf ("Insira o PIB: ");
    scanf ("%f", &pib2);

    printf ("Insira a quantidade de Pontos Turísticos: ");
    scanf ("%d", &pontosturisticos2);

        //Calculos da Densidade Populacional e Pib Per Capita:

        denpop1=populacao1/area1;
        pibpercapita1=pib1/populacao1;

        denpop2=populacao2/area2;
        pibpercapita2=pib2/populacao2;

    //Impressão das Cartas Escolhidas:

    printf ("\nAs cartas escolhidas foram:\n\n");

    //Carta 1

    printf ("Carta 1\n\n");

    printf ("Estado: %c\n", estado1);
    printf ("Código da Carta: %s\n", codigodacarta1);
    printf ("Cidade: %s\n", cidade1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.3f km²\n", area1);
    printf ("PIB: %.3f bilhões de reais\n", pib1);
    printf ("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf ("Desidade Populacional: %.2f hab/km²\n", denpop1);
    printf ("PIB per Capita: %.2f reais\n\n", pibpercapita1);

    //Carta 2

    printf ("Carta 2\n\n");

    printf ("Estado: %c\n", estado2);
    printf ("Código da Carta: %s\n", codigodacarta2);
    printf ("Cidade: %s\n", cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.3f km²\n", area2);
    printf ("PIB: %.3f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", denpop2);
    printf ("PIB per Capita: %.2f reais\n\n", pib2);

    return 0;
}

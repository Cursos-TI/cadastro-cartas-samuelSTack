#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void limparenter(char *str){
    str[strcspn(str,"\n")] = '\0';
}

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char estado1[50];
    char Codgocarta1[50];
    char Nomecarta1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Carta 2
    char Estado2[50];
    char Codgocarta2[50];
    char Nomecarta2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
     
    // outras variáveis
    int opcao;

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("                                  BEM VINDO AO JOGO DE CARTAS                                                    \n");
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");

    printf("\n PARA COMEÇAR DIGITE O ESTADO DA CARTA 1: ");
    fgets(estado1,50,stdin);
    limparenter(estado1);

    printf(" DIGITE O CÓDIGO EXEMPLO (PB): ");
    fgets(Codgocarta1,50,stdin);
    limparenter(Codgocarta1);

    printf(" DIGITE O NOME DA CARTA: ");
    fgets(Nomecarta1,50,stdin);
    limparenter(Nomecarta1);

    printf(" DIGITE AGORA O TAMANHO DA POPULAÇÃO DE %s: ",Nomecarta1);
    scanf("%d",&populacao1);
    while(getchar()!='\n');
    
    printf(" DIGITE O TAMANHO DA ÁREA DE %s: ",Nomecarta1);
    scanf("%f",&area1);
    while(getchar()!='\n');

    printf(" DIGITE AGORA O PIB DE %s: ",Nomecarta1);
    scanf("%f",&pib1);
    while(getchar()!='\n');

    printf(" DIGITE AGORA A QUANTIDADE DE PONTOS TURÍSTICOS EM %s: ",Nomecarta1);
    scanf("%d",&pontosturisticos1);
    while(getchar()!='\n');

    // segunda carta
    printf("\n VAMOS PARA A SEGUNDA CARTA");

    printf(" PARA COMEÇAR DIGITE O ESTADO DA CARTA 2: ");
    fgets(Estado2,50,stdin);
    limparenter(Estado2);

    printf(" DIGITE O CÓDIGO EXEMPLO (PB): ");
    fgets(Codgocarta2,50,stdin);
    limparenter(Codgocarta2);

    printf(" DIGITE O NOME DA CARTA: ");
    fgets(Nomecarta2,50,stdin);
    limparenter(Nomecarta2);

    printf(" DIGITE AGORA O TAMANHO DA POPULAÇÃO DE %s: ",Nomecarta2);
    scanf("%d",&populacao2);
    while(getchar()!='\n');
    
    printf(" DIGITE O TAMANHO DA ÁREA DE %s: ",Nomecarta2);
    scanf("%f",&area2);
    while(getchar()!='\n');

    printf(" DIGITE AGORA O PIB DE %s: ",Nomecarta2);
    scanf("%f",&pib2);
    while(getchar()!='\n');

    printf(" DIGITE AGORA A QUANTIDADE DE PONTOS TURÍSTICOS EM %s: ",Nomecarta2);
    scanf("%d",&pontosturisticos2);
    while(getchar()!='\n');

    // cálculos
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // menu
    printf("\n------------------------------------------------------------------------------------------\n");
    printf("               TODAS AS CARTAS CADASTRADAS — ESCOLHA AGORA O SEU PRÓXIMO PASSO                \n");
    printf("------------------------------------------------------------------------------------------\n");

    printf("\n1) COMPARAR NOME DAS CARTAS\n");
    printf("2) COMPARAR POPULAÇÃO\n");
    printf("3) COMPARAR ÁREA\n");
    printf("4) COMPARAR PIB\n");    
    printf("5) COMPARAR PONTOS TURÍSTICOS\n");
    printf("6) COMPARAR DENSIDADE DEMOGRÁFICA\n");
    printf("\nDIGITE: ");
    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("ATRIBUTO ESCOLHIDO NOME\n");
            printf("CARTA 1: %s , NOME CARTA 2: %s ",Nomecarta1,Nomecarta2);
            break;

        case 2:
            if(populacao1 > populacao2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI POPULAÇÃO >>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A POPULAÇÃO NO TAMANHO DE %d\n",Nomecarta1,populacao1);
                printf("\n                           VS                     \n");
                printf(" \n           CARTA %s COM A POPULAÇÃO NO TAMANHO DE %d\n",Nomecarta2,populacao2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s🎉",Nomecarta1);
                printf("\n-------------------------------------------------------------------\n");
            } else if (populacao1 < populacao2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI POPULAÇÃO >>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A POPULAÇÃO NO TAMANHO DE %d\n",Nomecarta1,populacao1);
                printf("\n                          VS                     \n");
                printf(" \n           CARTA %s COM A POPULAÇÃO NO TAMANHO DE %d\n",Nomecarta2,populacao2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s",Nomecarta2);
                printf("\n-------------------------------------------------------------------\n");
            } else{
                printf("\n-------------------------------------------------------------------\n");
                printf("                          EMPATE!");
                printf("\n-------------------------------------------------------------------\n");
            }
            break;

        case 3:
            if(area1 > area2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI ÁREA >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A ÁREA NO TAMANHO DE %.2f\n",Nomecarta1,area1);
                printf("\n                           VS                     \n");
                printf(" \n           CARTA %s COM A ÁREA NO TAMANHO DE %.2f\n",Nomecarta2,area2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s🎉",Nomecarta1);
                printf("\n-------------------------------------------------------------------\n");
            } else if (area1 < area2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI ÁREA >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A ÁREA NO TAMANHO DE %.2f\n",Nomecarta1,area1);
                printf("\n                          VS                     \n");
                printf(" \n           CARTA %s COM A ÁREA NO TAMANHO DE %.2f\n",Nomecarta2,area2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s",Nomecarta2);
                printf("\n-------------------------------------------------------------------\n");
            } else{
                printf("\n-------------------------------------------------------------------\n");
                printf("                          EMPATE!");
                printf("\n-------------------------------------------------------------------\n");
            }
            break;

        case 4:
            if(pib1 > pib2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI PIB >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM O PIB NO TAMANHO DE %.2f\n",Nomecarta1,pib1);
                printf("\n                           VS                     \n");
                printf(" \n           CARTA %s COM O PIB NO TAMANHO DE %.2f\n",Nomecarta2,pib2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s🎉",Nomecarta1);
                printf("\n-------------------------------------------------------------------\n");
            } else if (pib1 < pib2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI PIB >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM O PIB NO TAMANHO DE %.2f\n",Nomecarta1,pib1);
                printf("\n                          VS                     \n");
                printf(" \n           CARTA %s COM O PIB NO TAMANHO DE %.2f\n",Nomecarta2,pib2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s",Nomecarta2);
                printf("\n-------------------------------------------------------------------\n");
            } else{
                printf("\n-------------------------------------------------------------------\n");
                printf("                          EMPATE!");
                printf("\n-------------------------------------------------------------------\n");
            }
            break;

        case 5:
            if(pontosturisticos1 > pontosturisticos2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI PONTOS TURÍSTICOS >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM PONTOS TURÍSTICOS NO TAMANHO DE %d\n",Nomecarta1,pontosturisticos1);
                printf("\n                           VS                     \n");
                printf(" \n           CARTA %s COM PONTOS TURÍSTICOS NO TAMANHO DE %d\n",Nomecarta2,pontosturisticos2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s🎉",Nomecarta1);
                printf("\n-------------------------------------------------------------------\n");
            } else if (pontosturisticos1 < pontosturisticos2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI PONTOS TURÍSTICOS >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM PONTOS TURÍSTICOS NO TAMANHO DE %d\n",Nomecarta1,pontosturisticos1);
                printf("\n                          VS                     \n");
                printf(" \n           CARTA %s COM PONTOS TURÍSTICOS NO TAMANHO DE %d\n",Nomecarta2,pontosturisticos2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s",Nomecarta2);
                printf("\n-------------------------------------------------------------------\n");
            } else{
                printf("\n-------------------------------------------------------------------\n");
                printf("                          EMPATE!");
                printf("\n-------------------------------------------------------------------\n");
            }
            break;

        case 6:
            if(densidade1 < densidade2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI DENSIDADE (VENCE A MAIS BAIXA) >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A DENSIDADE NO TAMANHO DE %.2f\n",Nomecarta1,densidade1);
                printf("\n                           VS                     \n");
                printf(" \n           CARTA %s COM A DENSIDADE NO TAMANHO DE %.2f\n",Nomecarta2,densidade2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s🎉",Nomecarta1);
                printf("\n-------------------------------------------------------------------\n");
            } else if (densidade1 > densidade2){
                printf("\n<<<<<<<<<<<<<<<< ATRIBUTO ESCOLHIDO FOI DENSIDADE (VENCE A MAIS BAIXA) >>>>>>>>>>>>>>>>>>>>>>>>>");
                printf(" \n           CARTA %s COM A DENSIDADE NO TAMANHO DE %.2f\n",Nomecarta1,densidade1);
                printf("\n                          VS                     \n");
                printf(" \n           CARTA %s COM A DENSIDADE NO TAMANHO DE %.2f\n",Nomecarta2,densidade2);
                printf("\n-------------------------------------------------------------------\n");
                printf("\n                 E O GRANDE CAMPEÃO É %s",Nomecarta2);
                printf("\n-------------------------------------------------------------------\n");
            } else{
                printf("\n-------------------------------------------------------------------\n");
                printf("                          EMPATE!");
                printf("\n-------------------------------------------------------------------\n");
            }
            break;

        default:
            printf("\n-------------------------------------------------------------------\n");
            printf("                              OPÇÃO INVÁLIDA");
            printf("\n-------------------------------------------------------------------\n");
            break;
    }

    return 0;
}
//100PORCENTO FEITOCPOR MIM
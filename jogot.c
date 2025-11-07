#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "portuguese);

    //carta1  
    char carta1[50];
    char estado1[50];
    char codigo1[50];
    char nome1[50];
    int populacao1;
    float area_km1;
    float PIB1;
    int numero_pontos1;
    float densidade1;
    float pibper1;
    float super_poder1;

    //carta2
    char carta2[50];
    char estado2[50];
    char codigo2[50];
    char nome2[50];
    int populacao2;
    float area_km2;
    float PIB2;
    int numero_pontos2;
    float densidade2;
    float pibper2;
    float super_poder2;

    printf("--------------------------------------------------------------------\n");
    printf("  OLÁ, PARA INICIAR A COMPARAÇÃO, PRECISAMOS CADASTRAR AS CARTAS    \n");
    printf("--------------------------------------------------------------------\n");

    printf("DIGITE O NÚMERO DA PRIMEIRA CARTA\n");
    fgets(carta1,50,stdin);

    printf("DIGITE O ESTADO\n");
    fgets(estado1,50,stdin);

    printf("DIGITE O CÓDIGO\n");
    fgets(codigo1,50,stdin);

    printf("DIGITE O NOME\n");
    fgets(nome1,50,stdin);

    printf("DIGITE AGORA A POPULAÇÃO\n");
    scanf("%d",&populacao1);
    while(getchar() != '\n'); 
    
    printf("DIGIE AGORA A AREA EM KM\n");
    scanf("%f",&area_km1);
    while(getchar() != '\n');
     
    printf("DIGIE AGORA O PIB\n");
    scanf("%f",&PIB1);
    while(getchar() != '\n');

    printf("DIGIE AGORA O NUMERO DE PONTOS\n");
    scanf("%d",&numero_pontos1);
    while(getchar() != '\n');

    densidade1=(float)(populacao1/area_km1);
    pibper1=(float)(PIB1/populacao1);
    super_poder1=(float)(populacao1 + area_km1 + PIB1 + numero_pontos1 + pibper1 + (1 / densidade1));


    //segundA CARTA

    printf("DIGITE AGORA O NÚMERO DA SEGUNDA CARTA\n");
    fgets(carta2,50,stdin);

    printf("DIGITE O ESTADO\n");
    fgets(estado2,50,stdin);

    printf("DIGITE O CÓDIGO\n");
    fgets(codigo2,50,stdin);

    printf("DIGITE O NOME\n");
    fgets(nome2,50,stdin);

    printf("DIGITE AGORA A POPULAÇÃO\n");
    scanf("%d",&populacao2);
    while(getchar() != '\n'); 
    
    printf("DIGIE AGORA A AREA EM KM\n");
    scanf("%f",&area_km2);
    while(getchar() != '\n');
     
    printf("DIGIE AGORA O PIB\n");
    scanf("%f",&PIB2);
    while(getchar() != '\n');

    printf("DIGIE AGORA O NUMERO DE PONTOS\n");
    scanf("%d",&numero_pontos2);
    while(getchar() != '\n');


    densidade2=(float)(populacao2/area_km2);
    pibper2=(float)(PIB2/populacao2);
    super_poder2=(float)(populacao2 + area_km2 + PIB2 + numero_pontos2 + pibper2 + (1 / densidade2));

    printf("CARTAS CADASTRADAS COM SUCESSO, COMPARAÇÃO DE CARTAS\n");

    printf("POPULAÇÃO: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n",populacao1>populacao2);

    printf("ÁREA: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", area_km1 > area_km2);


    printf("PIB: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", PIB1 > PIB2);
     
    printf("PONTOS TURISTICOS: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", numero_pontos1 > numero_pontos2);

    printf("DENSIDADE POPULACIONAL: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", densidade1 > densidade2);

    printf("PIB PER CAPITAL: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", pibper1 > pibper2);
    
    printf("SUPER PODERES: CARTA 1 VENCEU? (- 1 PARA SIM -0  PARA NÃO) (%d)\n", super_poder1 > super_poder2);
















    return 0;

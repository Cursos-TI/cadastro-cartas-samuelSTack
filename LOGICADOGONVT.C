#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

// Função para remover o ENTER do fgets
void limparEnter(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

int main(){

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Carta 1
    char Estado1[50];
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

    printf("-----------------------------------------------------\n");
    printf("        BEM VINDO AO SEU SUPER TRUNFO C👑🐉\n");
    printf("------------------------------------------------------\n");

   printf("             VAMOS COMEÇAR O CADASTRO DAS CARTAS🃏\n\n");
   printf("QUAL NÚMERO DA SUA  PRIMEIRA CARTA\n");
   fgets(Nomecarta1,50,stdin);
   limparEnter(Nomecarta1);

   printf("MUITO BEM JOGADOR, DIGITE AGORA O ESTADO DA PRIMEIRA CARTA\n");
   fgets(Estado1,50,stdin);
   limparEnter(Estado1);
  
   printf("DIGITE AGORA O CODÍGO EXEMPLO (PB)\n");
   fgets(Codgocarta1,50,stdin);
   limparEnter(Codgocarta1);

   printf("AGORA DIGITE O TAMNAHO DA POPULAÇAO\n");
   scanf("%d",&populacao1);
    while (getchar() !='\n');

  printf("DIGITE AGORA A ARÉA\n");
  scanf("%f",&area1);
  while(getchar() !='\n');

  printf("DIGITE AGORA O PIB\n");
  scanf("%f",&pib1);
  while(getchar() !='\n');
 
  printf("DIGITE AGORA O NUMERO DE PONTOS TURISTICOS\n");
  scanf("%d",&pontosturisticos1);
  while(getchar() !='\n');

 printf("--------------------------------------------------\n");
 printf("            CARTA 1 CADASTRADA                     \n ");
 printf("--------------------------------------------------\n\n\n");

 //carta 2


  printf("--------------------------------------------------\n");
 printf("            HORA DA SEGUNDA                     \n ");
 printf("--------------------------------------------------\n");

   printf("QUAL NÚMERO DA SUA  SEGUNDA CARTA\n");
   fgets(Nomecarta2,50,stdin);
   limparEnter(Nomecarta2);

   printf("MUITO BEM JOGADOR, DIGITE AGORA O ESTADO DA SEGUNDA CARTA\n");
   fgets(Estado2,50,stdin);
   limparEnter(Estado2);
  
   printf("DIGITE AGORA O CODÍGO EXEMPLO (PB)\n");
   fgets(Codgocarta2,50,stdin);
   limparEnter(Codgocarta2);

   printf("AGORA DIGITE O TAMNAHO DA POPULAÇAO\n");
   scanf("%d",&populacao2);
    while (getchar() !='\n');

  printf("DIGITE AGORA A ARÉA\n");
  scanf("%f",&area2);
  while(getchar() !='\n');

  printf("DIGITE AGORA O PIB\n");
  scanf("%f",&pib2);
  while(getchar() !='\n');
 
  printf("DIGITE AGORA O NUMERO DE PONTOS TURISTICOS\n");
  scanf("%d",&pontosturisticos2);
  while(getchar() !='\n');

 printf("--------------------------------------------------\n");
 printf("            CARTA 2 CADASTRADA                     \n ");
 printf("--------------------------------------------------\n");

  // ----- CÁLCULOS -----
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;


 printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
 printf("               HORA DA COMPARAÇÃO🐉                     \n ");
 printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");


printf("CARTA: %s %s (%s) SEU PIB: %.2f\n", Nomecarta1, Estado1, Codgocarta1, pib1);
printf("CARTA: %s %s (%s) SEU PIB: %.2f\n", Nomecarta2, Estado2, Codgocarta2, pib2);


printf("            ATRIBUTO ESCOLHIDO PIB!\n");

 printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
 printf("             RESULTADO🐉                                \n ");
 printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");


if (pib1>pib2)
{printf("CARTA %s POSSUI O PIB MAIOR QUE A SEGUNDA",Nomecarta1);
} else {
 printf("CARTA %s POSSUI O PIB MAIOR QUE A PRIMEIRA",Nomecarta2);
};







     return 0 ;

)
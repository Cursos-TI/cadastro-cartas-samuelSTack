#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char carta[50];
    char estado[50];
    char codigo[50];
    char nome[50];
    int populacao;
    float area_km;
    float PIB;
    int numero_pontos;

    //variavel carta 2
    char cart[50];
    char estad[50];
    char codig[50];
    char nom[50];
    int populaca;
    float area_k;
    float PI;
    int numero_ponto;

    printf("Olá, Jogador!\n");
    printf("Vamos começar a cadastrar sua primeira carta. Qual número da carta?\n");
    fgets(carta, 50, stdin);

    printf("Para continuar digite seu estado:\n");
    fgets(estado, 50 ,stdin);

    printf("Me informa agora seu código:\n");
    fgets(codigo,50 , stdin);

    printf("Informa agora o nome da cidade:\n");
    fgets(nome,50,stdin);

    printf("Agora preciso do número da População:\n");
    scanf("%d", &populacao);
    while(getchar() != '\n'); // limpa o buffer

    printf("Digite agora a área:\n");
    scanf("%f", &area_km);
    while(getchar() != '\n');

    printf("Quase lá, Qual o PIB atual:\n");
    scanf("%f", &PIB);
    while(getchar() != '\n');

    printf("Qual número de pontos turísticos?\n");
    scanf("%d", &numero_pontos);
    while(getchar() != '\n');

    printf("Primeira carta cadastrada: %s\n", carta);

    printf("Hora da segunda \nDigite o número da carta:\n");
    fgets(cart, 50, stdin);

    printf("Para continuar digite seu estado:\n");
    fgets(estad, 50 ,stdin);

    printf("Me informa agora seu código:\n");
    fgets(codig,50 , stdin);

    printf("Informa agora o nome da cidade:\n");
    fgets(nom,50,stdin);

    printf("Agora preciso do número da População:\n");
    scanf("%d", &populaca);
    while(getchar() != '\n');

    printf("Digite agora a área:\n");
    scanf("%f", &area_k);
    while(getchar() != '\n');

    printf("Quase lá, Qual o PIB atual:\n");
    scanf("%f", &PI);
    while(getchar() != '\n');

    printf("Qual número de pontos turísticos?\n");
    scanf("%d", &numero_ponto);
    while(getchar() != '\n');

    printf("Segunda carta cadastrada: %s\n", cart);

    printf("Carta: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area_km);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos turísticos: %d\n", numero_pontos);

    //segunda carta
    printf("\nCarta: %s\n", cart);
    printf("Estado: %s\n", estad);
    printf("Código: %s\n", codig);
    printf("Nome: %s\n", nom);
    printf("População: %d\n", populaca);
    printf("Área: %.2f km²\n", area_k);
    printf("PIB: %.2f\n", PI);
    printf("Pontos turísticos: %d\n", numero_ponto);

    return 0;
}

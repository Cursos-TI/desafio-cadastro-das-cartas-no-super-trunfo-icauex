#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

  //Carta 1//
  setlocale(LC_ALL, "pt_BR.UTF-8");

  char estado[3];
  char codigo_da_carta[20];
  char nome_cidade[50];
  int populacao, pontos_turisticos;
  float area, PIB;

  printf("Carta 01 \n");
  
  printf("Digite o estado da primeira carta: \n");
  scanf("%s", estado);
  
  printf("Digite o código da primeira carta: \n");
  scanf("%s", codigo_da_carta);

  printf("Digite o nome da cidade: \n");
  scanf(" %[^\n]", nome_cidade);

  printf("Digite o número da população: \n");
  scanf("%d", &populacao);

  printf("Digite a quantidade de pontos turísticos: \n");
  scanf("%d", &pontos_turisticos);

  printf("Digite o número do PIB: \n");
  scanf("%f", &PIB);

  printf("Digite a área em km: \n");
  scanf("%f", &area);

  //CARTA 2//

  char estado_carta2 [3],codigo_carta02[20],nome_da_cidade02[50];
  int populacao02,pontos_turisticos02;
  float PIB02, area02;

  printf("Carta 02 \n");

  printf("Agora, digite o estado da segunda carta: \n");
  scanf("%s", estado_carta2);

  printf("Digite código da segunda carta:  \n");
  scanf("%s", codigo_carta02);

  printf("Digite o nome da cidade da segunda carta: \n");
  scanf(" %[^\n]", &nome_da_cidade02);

  printf("Digite o número da população da segunda carta: \n");
  scanf("%d", &populacao02);

  printf("Digite a quantidade de pontos turísticos da segunda carta: \n");
  scanf("%d", &pontos_turisticos02);

  printf("Digite o número do PIB: \n");
  scanf("%f", &PIB02);

  printf("Digite a área em km: \n");
  scanf("%f", &area02);

  printf("=== Carta 01 === \n");
  printf("Estado : %s\n",estado);
  printf("Código : %s\n", codigo_da_carta);
  printf("Nome da Cidade : %s\n", nome_cidade);
  printf("Populção : %d\n", populacao);
  printf("Área : %f km²\n", area);
  printf("PIB : R$ %f\n",PIB);
  printf("Número de pontos turísticos : %d\n", pontos_turisticos);

  printf("=== Carta 02 === \n");
  printf("Estado : %s\n",estado_carta2);
  printf("Código : %s\n",codigo_carta02);
  printf("Nome da Cidade : %s\n", nome_da_cidade02);
  printf("População : %d\n", populacao02);
  printf("Área : %f km²\n", area02);
  printf("PIB : R$ %f\n", PIB02);
  printf("Número de pontos turísticos : %d\n", pontos_turisticos02);


return 0;



}

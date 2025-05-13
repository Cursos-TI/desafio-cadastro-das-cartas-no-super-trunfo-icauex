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
  float area, PIB, pibpercarpita, denspop, superpoder;

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
  float PIB02, area02 ,pibpercapita02,denspop02, superpoder02;



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
  
  
  pibpercarpita = PIB/populacao;
  pibpercapita02 = PIB02/populacao02;
  
  denspop = populacao/area;
  denspop02 = populacao02/area02;
 
  superpoder = populacao + area + PIB + pontos_turisticos + pibpercarpita + denspop;
  superpoder02 = populacao02 + area02 + PIB02 + pontos_turisticos02 + pibpercapita02 + denspop02;


  printf("=========== Carta 01 =========== \n");
  printf("Estado : %s\n",estado);
  printf("Código : %s\n", codigo_da_carta);
  printf("Nome da Cidade : %s\n", nome_cidade);
  printf("Populção : %d\n", populacao);
  printf("Área : %f km²\n", area);
  printf("PIB : R$ %f\n",PIB);
  printf("Número de pontos turísticos : %d\n", pontos_turisticos);
  printf("PIB per capta : R$ %f\n",pibpercarpita);
  printf("Densidade populacional : %f hab/km²\n",denspop);
  printf("O nível de poder desta carta é: %.3f \n",superpoder );

  printf("=========== Carta 02 =========== \n");
  printf("Estado : %s\n",estado_carta2);
  printf("Código : %s\n",codigo_carta02);
  printf("Nome da Cidade : %s\n", nome_da_cidade02);
  printf("População : %d\n", populacao02);
  printf("Área : %f km²\n", area02);
  printf("PIB : R$ %f\n", PIB02);
  printf("Número de pontos turísticos : %d\n", pontos_turisticos02);
  printf("PIB per capta : R$ %f\n",pibpercapita02);
  printf("Densidade populacional : %f hab/km²\n",denspop02);
  printf("O nível de poder desta carta é: %.3f \n",superpoder02 );

  //comparação das cartas//
  printf("----------- Avaliando as Cartas -----------\n");

  if (populacao > populacao02) {
   printf("Populacao: A Carta 01 venceu\n");
  } else if (populacao < populacao02) {
    printf("Populacao: A carta 02 venceu\n");
  } else {
    printf("Populacao: Temos um empate!\n");
  }
  //area//
  if (area > area02) {
    printf("Area: A Carta 01 venceu\n");
  } else if (area < area02) {
    printf("Area: A Carta 02 venceu\n");
  } else {
    printf("Area: Temos um emapate!\n");
  }
  //pib//
 if (PIB > PIB02) {
  printf("PIB: A Carta 01 venceu\n");
 } else if (PIB < PIB02) {
  printf("PIB:A Carta 02 venceu\n");
 } else {
  printf("PIB:Temos um empate!\n");
 }
 //pontos turisticos//
if (pontos_turisticos > pontos_turisticos02) {
  printf ("Pontos Turisticos: A Carta 01 venceu\n");
} else if (pontos_turisticos < pontos_turisticos02) {
  printf("Pontos Turisticos:A Carta 02 venceu\n");
} else {
  printf("Pontos Turisticos: Temos um empate!\n");
}
//densidade populacional//
if (denspop < denspop02){
  printf("Densidade Populacional: A Carta 01 venceu\n");
} else if (denspop02 < denspop){
  printf("Densidade Populacional: A Carta 02 venceu\n");
}
//pib per capita//
if (pibpercarpita > pibpercapita02){
  printf("Pib per capita: A Carta 01 venceu\n");
} else if (pibpercarpita < pibpercapita02){
  printf("Pib per capita: A Carta 02 venceu\n");
} else {
  printf("Pib per capita: Temos um empate!\n");
}
//superpoder//
if (superpoder > superpoder02){
  printf("Superpoder: A Carta 01 venceu\n");
} else if (superpoder < superpoder02){
  printf("Superpoder: A Carta 02 venceu\n");
} else {
  printf("Superpoder: Temos um empate!\n");
}

// menu interativo de um atributo //
int escolhaJogador;

printf("****************** SUPERTRUNFO - COMPARANDO AS CARTAS ******************\n");
printf("Escolha uma das opções para comparar as cartas:\n");
printf("1. População\n");
printf("2. Area\n");
printf("3. PIB\n");
printf("4. Pontos turistics\n");
printf("5. Densidade demografica\n");
scanf("%d", &escolhaJogador);

switch (escolhaJogador)
{
case 1:
   printf("Voce selecionou População: \n");
   printf("%d (Carta 01) x %d (Carta 02)\n", populacao, populacao02);
  if (populacao > populacao02)
    printf("População: A Carta 01 venceu!\n");
  else if (populacao < populacao02)
    printf("População: A Carta 02 venceu!\n");
  else
    printf("População: Temos um empate!\n");
  break;
case 2:
  printf("Voce selecionou Area: \n");
  printf ("%d (Carta 01) x %d (Carta 02)\n", area, area02);
  if (area > area02)
    printf("Area: A Carta 01 venceu!\n");
  else if (area < area02)
    printf("Area: A Carta 02 venceu!\n");
  else
  {
    printf("Area: Empate!!\n");
  }
  break;
case 3:
  printf("Voce selecionou PIB: \n");
  printf("%d (Carta 01) x %d (Carta 02)\n",PIB, PIB02 );
  if (PIB > PIB02)
  {
    printf("PIB: A Carta 01 venceu!\n");
  } else if (PIB < PIB02)
  {
    printf("PIB: A Carta 02 venceu!\n");
  } else
  {
    printf("PIB: Empate!\n");
  }
  break;
case 4: 
  printf("Voce selecionou Pontos turisticos: \n");
  printf("%d (Carta 01) x %d (Carta 02)\n", pontos_turisticos, pontos_turisticos02);
  if (pontos_turisticos > pontos_turisticos02)
  {
    printf("Pontos turisticos: A Carta 01 venceu!\n");
  } else if (pontos_turisticos02 > pontos_turisticos)
  {
    printf("Pontos turisticos: A Carta 02 venceu!\n");
  } else
  {
    printf("Empatou !!\n");
  }
  break;
case 5:
  printf("Voce selecionou Densidade demografica: \n");
  printf("%d (Carta 01) x %d (Carta 02)\n", denspop, denspop02);
  if (denspop < denspop02)
  {
    printf("Densidade demografica: A carta 01 foi a vencedora!\n");
  } else if (denspop > denspop02)
  {
    printf("Densidade demografica: A Carta 02 foi a vencedora!\n");
  } else
  {
    printf("Temos um empate!!\n");
  }
  break;
    
default:
  printf("Opção invalida \n");
  break;
}

// comparando dois atributos //

int desafioOpcao1, desafioOpcao2;
float somaCarta1 = 0, somaCarta2 = 0;

printf("\n********** DESAFIO: ESCOLHA DOIS ATRIBUTOS **********\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per capita\n");
printf("Escolha o primeiro atributo: ");
scanf("%d", &desafioOpcao1);
printf("Escolha o segundo atributo: ");
scanf("%d", &desafioOpcao2);

if (desafioOpcao1 == desafioOpcao2) {
  printf("Você não pode escolher o mesmo atributo duas vezes!\n");

  // somando os valores dos atributos escolhidos //
for (int i = 0; i < 2; i++) {
  int escolha = (i == 0) ? desafioOpcao1 : desafioOpcao2;

  switch (escolha) {
    case 1:
       somaCarta1 += populacao;
       somaCarta2 += populacao02;
    break;
    case 2:
      somaCarta1 += area;
      somaCarta2 += area02;
    break;
    case 3:
      somaCarta1 += PIB;
      somaCarta2 += PIB02;
    break;
    case 4:
      somaCarta1 += pontos_turisticos;
      somaCarta2 += pontos_turisticos02;
    break;
    case 5:
      somaCarta1 += denspop;
      somaCarta2 += denspop02;
    break;
    case 6:
      somaCarta1 += pibpercarpita;
      somaCarta2 += pibpercapita02;
    break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}

printf("Resultado do desafio:\n");
printf("Soma dos atributos (Carta 01): %.2f\n", somaCarta1);
printf("Soma dos atributos (Carta 02): %.2f\n", somaCarta2);

if (somaCarta1 > somaCarta2) {
    printf("Desafio: A Carta 01 venceu!\n");
} else if (somaCarta2 > somaCarta1) {
    printf("Desafio: A Carta 02 venceu!\n");
} else {
    printf("Desafio: Empate!\n");
}







return 0;



}

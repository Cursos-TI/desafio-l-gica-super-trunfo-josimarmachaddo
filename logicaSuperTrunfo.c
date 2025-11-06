#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estadoA[50], estadoB[50];
    char codigoA[50],codigoB[50];
    char cidadeA[50], cidadeB[50];
    unsigned long int populacaoA, populacaoB;
    float areakmA, areakmB;
    float pibA, pibB;
    int turisticosA, turisticosB;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;


  // Área para entrada de dados carta 01

printf("Cadastre duas cartas para o game Super Trunfo:\n\n");
printf("CARTA 01\n");

printf("Digite o estado: ");
scanf("%s", &estadoA);

printf("Insira o código da carta: ");
scanf("%s", &codigoA);
 
printf("Digite o nome da cidade: ");
scanf("%s", &cidadeA);

printf("Digite a quantidade da população: ");
scanf("%u", &populacaoA);

printf("Digite a área em Km²: ");
scanf("%f", &areakmA);

printf("Digite o PIB: ");
scanf("%f", &pibA);

printf("Digite o numeros de pontos turisticos: ");
scanf("%d", &turisticosA);

densidade1 = populacaoA / areakmA;
pibcapita1 = pibA / populacaoA;

 // Área para exibição dos dados da cidade 01

printf("\nOs dados da carta 01 são:\n");
printf("Código: %s\n", codigoA);
printf("Estado: %s", estadoA);
printf("Nome da Cidade: %s\n", cidadeA);
printf("População: %u\n", populacaoA);
printf("Área: %f km²\n", areakmA);
printf("PIB: %f\n", pibA);
printf("Número de Pontos Turísticos: %d\n", turisticosA);
printf("Densidade populacional: %f hab/km²\n", densidade1);
printf("PIB per Capita: %f reais\n", pibcapita1);

// Área para entrada de dados carta 02
printf("=================\n");
printf("Agora digite os dados da carta 02:\n\n");
printf("CARTA 02:\n");

printf("Digite o estado: ");
scanf("%s", &estadoB);

printf("Insira o código da carta: ");
scanf("%s", &codigoB);

printf("Digite o nome da cidade: ");
scanf("%s", &cidadeB);

printf("Digite a quantidade da população: ");
scanf("%u", &populacaoB);

printf("Digite a área em km²: ");
scanf("%f", &areakmB);

printf("Digite o PIB: ");
scanf("%f", &pibB);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &turisticosB);

densidade2 = populacaoB / areakmB;
pibcapita2 = pibB / populacaoB;


 // Área para exibição dos dados da cidade 02

printf("\nOs dados da carta 01 são:\n");
printf("Código:%s\n", codigoB);
printf("Estado: %s\n", estadoB);
printf("Nome da Cidade: %s\n", cidadeB);
printf("População: %u\n", populacaoB);
printf("Área: %f km²\n", areakmB);
printf("PIB: %f\n", pibB);
printf("Número de Pontos Turísticos: %d\n", turisticosB);
printf("Densidade populacional: %f hab/km²\n", densidade2);
printf("PIB per Capita: %f reais\n", pibcapita2);

printf("=================\n\n");

//Super poder

float superPoderA = populacaoA + areakmA + turisticosA + pibA - pibcapita1;
float superPoderB = populacaoB + areakmB + turisticosB + pibB - pibcapita2;

printf("SUPER CARTA\n");
printf("O valor do Super poder da Carta A é: %.4f\n", superPoderA);
printf("O valor do Super poder da Carta A é: %.4f\n", superPoderB);
printf("============================\n\n");

//exibição dos resltados de comparação
printf("Comparação das cartas:\n");
printf("População: Carta 1 venceu (%u)\n", populacaoA > populacaoB);
printf("Área: Carta 1 venceu (%d)\n", areakmA > areakmB);
printf("PIB: Carta 1 venceu (%d)\n", pibA > pibB);
printf("Pontos turistícos: Carta 1 venceu (%d)\n", turisticosA > turisticosB);
printf("Densidade populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
printf("PIB per Capita: Carta 1 venceu (%d)\n", pibA > pibB);
printf("Super Poder: Carta 1 venceu (%d)\n", superPoderA > superPoderB);
printf("==============================\n\n");

printf("Comparação de cartas! (Atributo População):\n");
printf("Carta 1 - %s: %u habitantes\n", cidadeA, populacaoA);
printf("Carta 2 - %s: %u habitantes\n", cidadeB, populacaoB);


if (populacaoA > populacaoB){
  printf("Resultado: Carta 01 %s Venceu!", cidadeA);
} else{
  printf("Resultado: Carta 02 %s Venceu!", cidadeB);
}


printf("\n\nFIM");



return 0;


} 

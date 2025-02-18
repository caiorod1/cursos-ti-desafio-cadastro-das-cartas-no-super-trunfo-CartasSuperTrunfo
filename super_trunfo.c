#include <stdio.h>

int main(){
   /*
   Criando as variaveis para armazenar os cadastros da carta do usuario e logo após mostrar os atributos que o mesmo adicinou
   */
    char codigo[]= "01"; // codigo da primeira cidade
    char codigo2[] = "01"; //codigo da segunda cidade
    char nome[50]; // nome para primeira cidade
    char nome2 [20]; //nome para segunda cidade
    int populacao, populacao2; // população da cidade
    float area, area2;  // area da cidade
    float PIB, PIB2; //PIB da cidade 
    int turistico, turistico2; // pontos turisticos da cidade
    char estado = 'A';
    char estado2 = 'B';

printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
printf("Para iniciarmos o jogo, siga as instruções abaixo.\n");
printf("Coloque algumas informações da carta 1: Nome da cidade, população, área, PIB e número de pontos turísticos.\n");

printf("Insira o nome da primeira cidade: ");
scanf("%s", &nome);

printf("Insira a população da cidade: ");
scanf("%d", &populacao);

printf("Insira a área da cidade: ");
scanf("%f", &area);

printf("Insira o PIB: ");
scanf("%f", &PIB);

printf("Existem quantos pontos turisticos na cidade: ");
scanf("%d", &turistico);

printf("Agora vamos cadastrar a Carta 2\n");

printf("Coloque algumas informações da carta 2: Nome da cidade, população, área, PIB e número de pontos turísticos.\n");

printf("Insira o nome da segunda cidade: ");
scanf("%s", &nome2);

printf("Insira a população da cidade: ");
scanf("%d", &populacao2);

printf("Insira a área da cidade: ");
scanf("%f", &area2);

printf("Insira o PIB: ");
scanf("%f", &PIB2);

printf("Existem quantos pontos turisticos na cidade: ");
scanf("%d", &turistico2);

printf("Pronto, agora vou está te mostrando os atributos das duas cartas.\n");

printf("\nCARTA 1: \n");
printf("\tEstado: %c\n", estado);
printf("\tCódigo: %c%s\n", estado, codigo);
printf("\tNome da cidade: %s\n", nome);
printf("\tPopulação: %d\n", populacao);
printf("\tÁrea: %.2f km²\n", area);
printf("\tPIB: %.2f bilhões\n", PIB);
printf("\tPontos turisticos: %d\n", turistico);


printf("\nCARTA 2: \n");
printf("\tEstado: %c\n", estado2);
printf("\tCódigo: %c%s\n", estado2, codigo2);
printf("\tNome da cidade: %s\n", nome2);
printf("\tPopulação: %d\n", populacao2);
printf("\tÁrea: %.2f km²\n", area2);
printf("\tPIB: %.2f bilhões\n", PIB2);
printf("\tPontos turisticos: %d\n", turistico2);


return 0;


}

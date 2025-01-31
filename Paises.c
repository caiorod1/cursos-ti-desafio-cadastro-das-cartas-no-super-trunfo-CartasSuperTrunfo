#include <stdio.h>

int main(){
   /*
   Criando as variaveis para armazenar os cadastros da carta do usuario e logo após mostrar os atributos que o mesmo adicinou
   */
    char codigo [5]; //codigo da cidade
    char nome [50]; //nome da cidade
    double populacao; // população da cidade
    float area;  // area da cidade
    double PIB; //PIB da cidade 
    int turistico; // pontos turisticos da cidade

printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
printf("Para iniciarmos o jogo, você irá precisar colocar os seguintes dados da cidade: Código da cidade, nome, população, área, PIB, número de pontos turísticos.\n");

printf("Insira o código da cidade: ");
scanf("%s", codigo);

printf("Insira o nome da cidade: ");
scanf("%s", nome);

printf("Insira a população da cidade: ");
scanf("%lf", &populacao);

printf("Insira a área da cidade: ");
scanf("%f", &area);

printf("Insira o PIB: ");
scanf("%lf", &PIB);

printf("Existem quantos pontos turisticos da cidade: ");
scanf("%d", &turistico);

printf("Pronto, agora vou está te mostrando os atributos da sua carta.\n");

printf("Código: %s\n", codigo);
printf("Nome da cidade: %s\n", nome);
printf("População: %.0lf\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2lf\n", PIB);
printf("Pontos turisticos: %d\n", turistico);

return 0;


}

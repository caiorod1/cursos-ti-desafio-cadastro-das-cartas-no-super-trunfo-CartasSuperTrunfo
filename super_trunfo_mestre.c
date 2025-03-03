#include <stdio.h> 

int main(){
    char nome[50], nome2[20], codigo[6], codigo2 [6]; // Nome para o estado e codigo da cidade
    double PIB, PIB2;  // população da cidade //PIB da cidade 
    unsigned long int populacao, populacao2;
    float area, area2;  // area da cidade //PIB da cidade 
    int turistico, turistico2, jogador1, jogador2; // pontos turisticos da cidade
    char estado[5], estado2[5];
    float pib_percapita, pib_percapita2; //     pib / população
    float densidade_populacional, densidade_populacional2;   // pupulação / área da cidade
    long double super_poder1, super_poder2;

    printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
    printf("Siga as instruções abaixo.\n");

    // cadastrando a primeira carta.

    printf("Vamos iniciar o cadastro da carta. \n");

    printf("Insira o nome da primeira cidade: ");
    scanf(" %[^\n]", nome);
                    
    printf("Insira a população: ");
    scanf("%lu", &populacao);
                    
    printf("Insira a área: ");
    scanf("%f", &area);

    printf("Insira o PIB: ");
    scanf("%lf", &PIB);
                    
    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turistico);
                    
    printf("Vamos representar o Estado com uma letra (A - H) e um código (01 - 04). \n"); 
                    
    printf("Insira a uma letra (A - H): ");
    scanf("%s", estado);

    printf("Insira o codigo (01 - 04): ");
    scanf("%s", codigo);
             
    // CADASTRANDO A CARTA 2

    printf("Va iniciar o cadastro da segunda carta. \n");

    printf("Insira o nome da segunda cidade: "); 
    scanf(" %[^\n]", nome2);
                    
    printf("Insira a população: ");
    scanf("%lu", &populacao2);
                    
    printf("Insira a área: ");
    scanf("%f", &area2);
                    
    printf("Insira o PIB: ");
    scanf("%lf", &PIB2);
                    
    printf("Insira a quantidade de pontos turisticos: ");
    scanf("%d", &turistico2);
                    
    printf("Insira o estado ( A - H ): ");
    scanf("%s", estado2);
                    
    printf("Insira o codigo ( 01 - 04 ): ");
    scanf("%s", codigo2);

    // Apresentação da carta 1

    printf("\nCARTA 1: \n");   
    printf("\tCódigo: %s\n", codigo);
    printf("\tNome da cidade: %s\n", nome);
    printf("\tPopulação: %.0lu\n", populacao);
    printf("\tÁrea: %.2f km²\n", area);
    printf("\tPIB: %.2lf bilhões\n", PIB);
    printf("\tPontos turisticos: %d\n", turistico);
    pib_percapita = PIB / populacao;
    densidade_populacional =  populacao / area;
    printf("\tPIB per capita:R$ %.2f Reais\n", pib_percapita);
    printf("\tDensidade Populacional: %.2f hab/m²\n", densidade_populacional);
    super_poder1 = (float) (populacao + area + turistico + PIB + pib_percapita + (1/ densidade_populacional)); 
    printf("\tSuper poder: %.2Lf\n", super_poder1);

    // Apresentação da carta 2

    printf("\nAgora vamos a presentação da carta 2.\n");

    printf("\nCARTA 2: \n");
    printf("\tCódigo: %s\n", codigo2);
    printf("\tNome da cidade: %s\n", nome2);
    printf("\tPopulação: %.0lu\n", populacao2);
    printf("\tÁrea: %.2f km²\n", area2);
    printf("\tPIB: %.2lf bilhões\n", PIB2);
    printf("\tPontos turisticos: %d\n", turistico2);
    pib_percapita2 = PIB2 / populacao2;
    densidade_populacional2 =  populacao2 / area2;
    printf("\tPIB per capita:R$ %.2f Reais\n", pib_percapita2);
    printf("\tDensidade Populacional: %.2f hab/m²\n", densidade_populacional2); 
    super_poder2 = (float) (populacao2 + area2 + PIB2 +  turistico2 + PIB2 + pib_percapita2 + (1/ densidade_populacional2)); 
    printf("\tSuper poder: %.2Lf\n", super_poder2);

    // Comparando os atributos das cartas.

    // CARTA 1 = 1
    // CARTA 2 = 0

    printf("A maior populão é a: Carta %d \n", populacao > populacao2);
    printf("A maior área é a : Carta %d \n", area > area2);
    printf("O maior PIB é a: Carta %d \n", PIB > PIB2);
    printf("A maior quantidade de pontos turistico é a: Carta %d \n", turistico > turistico2);
    printf("Densindade polacional: Carta %d \n", densidade_populacional < densidade_populacional);
    printf("Maior Pib per Capita é a: Carta %d \n", pib_percapita > pib_percapita2);
    printf("Maior Super poder é a: Carta %d \n", super_poder1 > super_poder2);



return 0;

}

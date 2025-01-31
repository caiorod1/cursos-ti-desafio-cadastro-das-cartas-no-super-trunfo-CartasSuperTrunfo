#include <stdio.h>

//criando as variaveis

int main(){
    int estados;
    int jogo [50];
    char est1 [4]= "A01", est2 [4]= "B02", est3[4] = "C03", est4[4] = "D04", est5[4] = "E05", est6[4] = "F06", est7[4] = "G07", est8 [4] = "H08";   // coloquei estados como est para nao ficar muito grande na hora de codar
    char est9 [4] = "A01", est10[4] = "B02", est11[4]= "C03", est12[4] = "D04", est13[4] = "E05", est14 [4]= "F06", est15 [4]= "G07", est16 [4]= "H08";
    
//sai de mensagens falando um pouco sobre o jogo.
    
printf("Bem-Vindo ao jogo Super Trunfo Paises.\n");
printf("Para começar o jogo, iremos separar 1 pais, cada pai com 8 estados e cada estados com 4 cidades.\n");

char est1;printf("As Cartas são destribuidas aléatoriamente.\n\n");
printf("jogador 1:\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n", est1, est2, est3, est4, est5, est6, est7, est8);

printf("\nAgora vamos aprensetar as cartas aléatorias do jogador 2\n\n");
printf("jogador2:\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n %s\n", est9, est10, est11, est12, est13, est14, est15, est16);


return 0;

}
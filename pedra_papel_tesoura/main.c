#include <stdio.h>
#include <stdlib.h>

int main()
{
   //strcmp(strg1, strg2)==0
   //Pedra, papel ou tesoura!
   char player[256];
   char player2[256];

   printf("Player 1, Sua vez...");
   scanf("%s",&player);

   printf("\nPlayer 2, Sua vez...");
   scanf("%s",&player2);

   printf("\nAguarde, estamos calculando o resultado...\n");
   if(strcmp(player,"papel") == 0){

            if(strcmp(player2,"papel") == 0){
                printf("Empate");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Player 2 ganhou, porque corta papel");
            }else if(strcmp(player2,"pedra") == 0){
                printf("Player 2 perdeu, porque papel embrulha a pedra...");
            }else{
                printf("O player 2 jogou uma informacao invalida");
            }
   }else if(strcmp(player,"tesoura") == 0){
            if(strcmp(player2,"papel") == 0){
                printf("Player 2 perdeu porque tesoura corta papel");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("Empate");
            }else if(strcmp(player2,"pedra") == 0){
                printf("Player 2 ganhou porque esmaga tesoura");
            }else{
                printf("O player 2 jogou uma informacao invalida");
            }
   }else if(strcmp(player,"pedra") == 0){
            if(strcmp(player2,"papel") == 0){
                printf("Player 2 ganhou porque papel embrulha a pedra");
            }else if(strcmp(player2,"tesoura") == 0){
                printf("O player 2 perdeu porque pedra esmaga a tesoura");
            }else if(strcmp(player2,"pedra") == 0){
                printf("Empate");
            }else{
                printf("O player 2 jogou uma informacao invalida");
            }
   }else{
       printf("Voce jogou uma informacao invalida!");
   }

   return 0;
}

#include <stdio.h>
#include <conio.h>
#include  <stdlib.h>
 #include <time.h>
 int main (){

 
 int numerosecreto,palpite;

srand(time(NULL));

 numerosecreto= rand() % 100+1;

printf("jogo de adivinhacao\n");
printf("adivinhe o numero entre 1 a 100\n");

do {
 printf("Digite seu palpite: ");
        scanf("%d", &palpite);

 if (palpite == numerosecreto) {
printf("Parabens, voce acertou!\n");

} else if (palpite > numerosecreto) {
 printf("Muito alto, tente um numero menor!\n");

} else {
printf("Muito baixo, tente um numero maior!\n");
        }
		
} while (palpite != numerosecreto);
 
 

 
 return 0;

}
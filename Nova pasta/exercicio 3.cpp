#include<stdio.h>

int main(){
	
	int valor;
	int n100, n50, n20, n10, n5, n2;
	
	printf("Digite o valor a ser sacado:");
	scanf("%d",&valor);
	
	if (valor <= 0){
	printf("Esse valor não pode ser sacado.\n");
} 

	if(valor == 1 || (valor% 2 == 1 && valor < 5) ){
	printf("Nao e possivel sacar esse valor em notas.\n");
}
	
	
	n100 = valor / 100;
	valor = valor % 100;
	
	n50 = valor / 50;
	valor = valor % 50;
	
	n20 = valor / 20;
	valor = valor % 20;
	
	n10 = valor / 10;
	valor = valor % 10;
	
	n5 = valor  / 5;
	valor = valor % 5;
	
	n2 = valor / 2;
	valor = valor % 2;
	
	if (valor != 0){
		printf("Nao e possivel sacar esse valor.");
	}  else{
	
	
	printf("Notas entregues:\n");
    if (n100 > 0) printf("%d notas de R$ 100\n", n100);
    else if (n50 > 0) printf("%d  notas de R$ 50\n", n50);
    else if (n20 > 0) printf("%d  notas de R$ 20\n", n20);
    else if(n10 > 0) printf("%d  notas de R$ 10\n", n10);
    else if (n5 > 0) printf("%d  notas de R$ 5\n", n5);
    else if (n2> 0) printf("%d  notas de R$ 2\n", n2);
}


return 0;
}

#include <stdio.h>

int main(){



	float massa, altura, imc;
	
	printf("Digite seu peso em kg e sua altura em metros:");
	scanf("%f%f", &massa, &altura);
	
	imc = massa/(altura * altura);
	
	if(imc <18.5)
	printf("imc: %f/t Abaixo do peso./n", imc);
 
	else if (imc >= 18.5 && imc < 24.9)
	printf("imc: %f\t Peso normal./n", imc);
	
	else if (imc >= 24.9 && imc < 29.9)
	printf("imc: %f\t Sobrepeso./n", imc);
	
	else if (imc >= 29.9 && imc <34.9)
	printf("imc: %f\t Obesidade grau 1./n", imc);
	
	else if (imc >= 34.9 && imc <39.9)
	printf("imc: %f\t Obesidade grau 2./n", imc);
	
	else if (imc >= 40 )
	printf("imc: %f\t Obesidade grau 3./n", imc);
	
	
	
	
	return 0;
}
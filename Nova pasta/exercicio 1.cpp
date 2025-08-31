#include <stdio.h>
  int main (){
  	int a, b ,c;
  	
	  printf ("digite tres valores: ");
	  scanf ("%d %d %d", &a, &b, &c);
  	
  	if(a + b > c && a + c > b && b + c > a ){
	 printf ("os tres lados formam um triangulo!\n");
	  
  	if (a == b && a == c){
  	printf("Equilatero\n");
  	 
	   }else if (a == b || a == c || b == c ){  
  	printf ("Isosceles\n");
    
	}else{
  	 printf("Escaleno\n");
  	 }
}
  	else
  	printf("os tres lados nao formam um tringulo!\n");
  	
  	
  	return 0;
  }
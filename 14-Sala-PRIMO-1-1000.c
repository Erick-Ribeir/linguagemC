#include <stdio.h>

int ehPrimo(int numero){
	int div;
	if(numero==1  || numero==-1)
		return 0;
	for(div=2;div<numero;div++){
		if(numero%div==0)
			return 0;
		}//fim for
	return 1;
}//fim funçao
int main (){
	int contador, inicial, fim;
	printf("Entre com o valor inicial e final:");
	scanf("%d%d",&inicial,&fim);
	for(contador=inicial;contador<=fim;contador++){
		if(ehPrimo(contador==1))
			printf("%d   ",contador);
	}
	return 0;
}
	

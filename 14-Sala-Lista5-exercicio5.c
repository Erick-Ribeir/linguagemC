#include <stdio.h>

int ehPrimo(int numero){
	int div;
	for(div=2;div<numero;div++){
		if(numero%div==0)
			return 0;
		}//fim for
	return 1;
}//fim funçao
int main (){
	int numero;
	while(1){
		printf("Entre com um numero:");
		scanf("%d",&numero);
		if(ehPrimo(numero)==1)
			printf("%d eh primo\n",numero);
		else
			printf("%d nao eh primo\n",numero);
	} //fim while
	return 0;
}


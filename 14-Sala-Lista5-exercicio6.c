#include <stdio.h>

int ehPrimo(int numero){
	int div;
	for(div=2;div<numero;div++){
		if(numero%div==0)
			return 0;
		}//fim for
	return 1;
}//fim funçao
	int qtdPrimos(int n){
		int cont, qtd=0;
		for(cont=1;cont<=n;cont++){
			if(ehPrimo(cont)==1)
		qtd++;
		}		
	return qtd;	
	}
int main(){
	int n, resp;
	printf("Informe o valor de n:");
	scanf("%d",&n);
	resp = qtdPrimos(n);
	printf("Quantidade de primos entre 1 e %d = %d",n,resp);
	return 0;
}

#include <stdio.h>

int main(){
	int numero,contador=0;
	float soma=0,media;
	do{
		printf("Entre com um numero: ");
		scanf("%d",&numero);
		if(numero >=50 && numero <=100){
			contador++; //contando
			soma+=numero; //soma= soma+numero;
		}//fim if	
	}while(numero!=0);
	media=soma/contador;
	printf("Contador do intervalo:%d\n A media dos valores:%.2f",contador, media);
	return 0;
}//fim main

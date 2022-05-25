#include <stdio.h>

int main(){
	float n1,n2, resultado;
	int opcao;
	printf("*** Sistema de calculos***\n");
	printf("1-SOMA\n");
	printf("2-SUBTRACAO\n");
	printf("3-MULTIPLICACAO\n");
	printf("4-DIVISAO\n");
	printf("Entre com a opcao: ");
	scanf("%d",&opcao);
	printf("Entre com dois valores: ");
	scanf("%f%f",&n1,&n2);
	switch(opcao){	
		case 1: resultado = n1+n2;
			break;
		case 2: resultado = n1-n2;
			break;
		case 3: resultado = n1*n2;
			break;
		case 4: resultado = n1/n2;
			break;
		default:printf("Opcao invalida\n");
	}//fim switch
	 printf("Resultado: %.2f",resultado);
	 return 0;
}//fim main

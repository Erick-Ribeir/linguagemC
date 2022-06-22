#include <stdio.h>
//#include <math.h>
//define PI 3.1416
float areaCirculo(float raio){
	float r;
	r = 3.1416*raio*raio;
	//r=PI*pow(raio,2);
	return r;
}//fim funcao area
//-------------------------------------------------------
int fatorial(int num){
	int cont, fat=1;	//cont=contador de num
	for(cont=1;cont<=num;cont++)
		fat= fat*cont;	//fat*=cont
	return fat;
}//fim funcao potencia
//-------------------------------------------------------
int menu(){
	int opcao;
	printf("** Sistemas de Informaçao **\n");
	printf("1- Calculo da Area de Circunferencia\n");
	printf("2- Fatorial\n");
	printf("0-Sair\n");
	printf("Entre com uma opcao:");
	scanf("%d",&opcao);
	return opcao;
}
//-------------------------------------------------------
int main(){
	int opcao,num;
	float raio;
	
	opcao= menu();
	switch(opcao){
		case 1: printf("Entre com o raio:\n");
				scanf("%f",&raio);
				printf("Area = %f\n", areaCirculo(raio));
			break;
		case 2: printf("Entre com um numero:\n");
				scanf("%d",&num);
				printf("Fatorial= %d\n",fatorial(num));
			break;
		case 0: printf("Saindo...\n");
			break;	 
	}
}//fim main


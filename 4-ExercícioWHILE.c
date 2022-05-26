#include <stdio.h>
int main(){
	int inicial,final,contador;
	printf("Entre com o Valor Inicial e Valor Final do intervalo:");
	scanf("%d%d",&inicial,&final);
	contador=inicial;
	while(contador<=final){
		printf("%d\n",contador);
		contador++;
		Sleep(500); //pausa
	}//fim while
	return 0;
}//fim main

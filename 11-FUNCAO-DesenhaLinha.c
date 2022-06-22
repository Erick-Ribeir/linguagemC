#include <stdio.h>
void desenhaLinha(int n){
	int cont; 
	for(cont=1;cont<=n;cont++)
		printf("_");
	printf("\n");
}//fim funcao desenha
int main(){
	int tamanho;
	while(1){
		printf("Entre com o tamanho da linha:");
		scanf("%d",&tamanho);
		desenhaLinha(tamanho);
	}//fim while
	return 0;
}


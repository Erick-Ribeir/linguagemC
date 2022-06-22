#include <stdio.h>

int main(){
	int i, vet[100], n,busca, encontrou;
	printf("Qtde de valores no vetor:");
	scanf("%d",&n);
	float soma=0;
	// lendo dados para o vetor
	for(i=0;i<n;i++){
	   printf("Vetor[%d]:",i);
	   scanf("%d",&vet[i]);
	}   
	// mostrando os dados do vetor
	printf("*** Dados do Vetor ***\n");
	for(i=0;i<n;i++){
	   printf("[%d] %d |",i, vet[i]);
	   soma+= vet[i];
	}  
	printf("\nSoma do vetor:%.2f\n",soma);
	printf("Media:%.2f\n",soma/n);
	//Buscar um valor
	while(1){
	printf("Valor para busca:");
	scanf("%d",&busca);
	encontrou=0;
	for(i=0;i<n;i++){
		if(busca==vet[i]){
			printf("Valor %d encontrado na posicao %d\n", busca,i);
			encontrou=1;
		}//fim if
	}//fim for busca
	if(!encontrou)
		printf("Valor nao encontrado na no vetor\n");
	}//fim while
	
	return 0;
}

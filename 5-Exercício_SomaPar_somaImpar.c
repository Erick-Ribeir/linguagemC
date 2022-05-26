#include <stdio.h>
int main(){
	int num,par,impar,somapar=0,somaimpar=0,contpar=1,contimpar=1;
	float mediapar,mediaimpar;
	do{
		printf("Digite um numero: ");
		scanf("%d",num);
		if(num >0){
			if(num%2==0){
				somapar++;
				contpar++;
			}//fim 2if
			 else {
			 	somaimpar++;
			 	contimpar++;
			 }//fim else
		}//fim 1if
	}while(num>0);
	
	mediapar=somapar/contpar;
	mediaimpar=somaimpar/contimpar;
	printf("mediapar= %.2lf\nmediaimpar= %.2lf",mediapar,mediaimpar);
    

	 return 0;
}

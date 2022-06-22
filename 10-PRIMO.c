#include <stdio.h>
int main(){
	int num,div,primo=1,vezes,cont;
	scanf("%dDigite quantas vezes:",&vezes);
	for(cont=1;cont<=vezes;cont++){
		primo=1;
		scanf("%d",&num);
		for(div=2;div<num;div++){
			if(num%div==0){
				primo=0;
				break;
			}//fim if
		}//fim 2for primo
		if(primo==1)
			printf("%d eh primo\n",num);
		else
			printf("%d nao eh primo\n",num);	
	}//fim 1for vezes
	return 0;
}

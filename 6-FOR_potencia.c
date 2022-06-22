#include <stdio.h>

int main(){
	int base,exp,pot=1,i;
	printf("Digite a base e expoente: ");
	scanf("%d%d",&base,&exp);
	for(i=1;i<=exp;i++)
		pot*=base;	//pot=pot*base]
	printf("%d ^ %d = %d",base,exp,pot);
	return 0;
}//fim main

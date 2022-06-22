#include <stdio.h>

int main(){
	int n, fat=1,cont;
	scanf("%d",&n);
	for(cont=1;cont<=n;cont++){
		fat=fat*cont;
	}//fim for
	printf("%d\n",fat);
	return 0;
}//fim main

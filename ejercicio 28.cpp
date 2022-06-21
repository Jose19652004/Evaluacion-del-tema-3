#include "stdio.h"

int main(){
	
	int numero;
	
	do {
		printf("Escribe cualquier numero");
		scanf("%d",&numero);
	}while(numero <= 0);
	return 0;
}


#include"stdio.h"

int main(){
	
	int n;
	
	printf("coloque un numero entero", 101 );
	
	scanf("%d",&n);
	
	if( n >= -9 && n <= 9 ) 
		printf("tiene 1 d% digitos.", 100 );
		
	else
	
		if ( n>= -99 && n <= 99 )
			printf("tiene 2 d% digitos.",102);
		else
		
			if ( n>= -999 && n <= 999 )
				printf("tiene 3 d% digitos.", 102 );
			else
				printf("tiene mas de 3 d% digitos.", 100 , 101 );
				
	return 0;
	
}

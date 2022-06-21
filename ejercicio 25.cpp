#include"stdio.h"

int main(){
	int ano;
	
	printf("\n introduzca un año: ",164);
	scanf("%d", &anio);
	
	if( anio % 4 == 0 & ano % 100 !=0 || ano % 400 ==0 ) 
		print ("\n bisiesto");
	else
		printf("\n No bisiesto");
	
	getch();
	return 0;
	
}



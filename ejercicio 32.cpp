//Carlos Moya y Manuel Rodriguez.
//ejercicio 32

#include <stdio.h>
int main(){
	int n, x, mayor;
	do
	{
		printf("Ingresar numero ");
		scanf("%i", &n);
		x = n;
		if(x > mayor)
		{
			mayor = x;
		}
		else{
			
		}
	}while(n != 0);
	printf("El mayor numero es: %i", mayor);
	return 0;
}
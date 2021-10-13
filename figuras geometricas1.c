#include <stdio.h>
#include <stdlib.h>

/* Menu Figuras Geometricas */

int main(int argc, char *argv[]) 
{
	int opcion;
	float a, b, h, pi=3.1416, r, l;
	printf("*** Menu Figuras Geometricas ***\n");
	printf("1. Cuadrado\n");
	printf("2. Rectangulo\n");
	printf("3. Triangulo\n");
	printf("4. Circulo\n");
	printf("Selecciona una opcion:");
	scanf("%d", &opcion);
	if(opcion==1)
	{
		printf("Operacion Cuadrado\n");
		printf("Dame el lado:");
		scanf("%f", &l);
		a=l*l;
		printf("El area del cuadrado es:%.1f", a);
	}
	else 
	if(opcion==2)
	{
		printf("Operacion Rectangulo\n");
		printf("Dame la base:");
		scanf("%f", &b);
		printf("Dame la altura:");
		scanf("%f", &h);
		a=b*h;
		printf("El area del rectangulo es: %.1f", a);
	}
	else
	if(opcion==3)
	{
		printf("Operacion Cuadrado\n");
		printf("Dame el lado:");
		scanf("%f", &l);
		a=l*l;
		printf("El area del cuadrado es:%.1f", a);
	}

	return 0;
}

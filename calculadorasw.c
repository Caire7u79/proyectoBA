#include <stdio.h>
#include <stdlib.h>

/* calculadora switch - case*/

int main(int argc, char *argv[]) 
{
	int a,b,c,op;
	printf("*** Calculadora SwitchCase ***\n");
	printf("1. Suma\n");
	printf("2. Resta\n");
	printf("3. Multiplicacion\n");
	printf("4. Division\n");
	printf("Selecciona una opcion:");
	scanf("%d", &op);
	switch(op)
	{
		case 1:
			printf("Operacion suma\n");
			printf("Dame el primer numero:");
			scanf("%d", &b);
			printf("Dame el segundo numero:");
			scanf("%d", &c);
			a=b+c;
			printf("la suma es:%d", a);
			break;
	case 2:
			printf("Operacion resta\n");
			printf("Dame el primer numero:");
			scanf("%d", &b);
			printf("Dame el segundo numero:");
			scanf("%d", &c);
			a=b-c;
			printf("la resta es:%d", a);
			break;
	case 3:
		printf("Operacion multiplicacion\n");
			printf("Dame el primer numero:");
			scanf("%d", &b);
			printf("Dame el segundo numero:");
			scanf("%d", &c);
			a=b*c;
			printf("la multiplicacion es:%d", a);
			break;
	case 4:
	    printf("Operacion division\n");
			printf("Dame el primer numero:");
			scanf("%d", &b);
			printf("Dame el segundo numero:");
			scanf("%d", &c);
			a=b/c;
			printf("la division es:%d", a);
			break; 
	
	}
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* Banco UCAD - cajero V.1 */

int main(int argc, char *argv[]) 
{
	int op;
	float canti, clabe;
	printf("*** Banco UCAD ***\n");
	printf("1. Consultas\n");
	printf("2. Recargas\n");
	printf("3. Pago de servicios\n");
	printf("4. Transferencias\n");
	printf("5. Depositos\n");
	printf("6. Retiros\n");
	printf("Selecciona tu opcion:");
	scanf("%d", &op);
	if(op==1)/*Inicia consultas del menu principal*/
	{
		printf("*** Consultas ***\n");
	}
	else/* Termina consuly¿tas del menu principal*/
	if(op==2)/*Inicia recargas del menu principal*/
	{
		printf("*** Recargas ***\n");
		printf("1. Telcel\n");
		printf("2. Movistar\n");
		printf("3. AT&T\n");
		printf("4. Freedompop\n");
		printf("5. Virginmovil\n");
		printf("Selecciona tu opcion:");
		scanf("%d", &op);
		if(op==1)
		{
			printf("*** Telcel ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("Selecciona una opcion:");
			scanf("%d", &op);
			if(op==1)
			{
				printf("Gracias por tu compra, tu recarga fue de $500");
			}
			else
			if(op==2)
			{
				printf("Gracias por tu compra, tu recarga fue de $300");
			}
			else
			if(op==3)
			{
				printf("Gracias por tu compra, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("Gracias por tu compra, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("Gracias por tu compra, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("Gracias por tu compra, tu recarga fue de $20");
			}
		}
		else
		if(op==2)
		{
			printf("*** Movistar ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("Selecciona una opcion:");
			scanf("%d", &op);
			if(op==1)
			{
				printf("Gracias por tu compra, tu recarga fue de $500");
			}
			else
			if(op==2)
			{
				printf("Gracias por tu compra, tu recarga fue de $300");
			}
			else
			if(op==3)
			{
				printf("Gracias por tu compra, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("Gracias por tu compra, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("Gracias por tu compra, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("Gracias por tu compra, tu recarga fue de $20");
			}
		}
		else
		if(op==3)
		{
			printf("*** AT&T ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("Selecciona una opcion:");
			scanf("%d", &op);
			if(op==1)
			{
				printf("Gracias por tu compra, tu recarga fue de $500");
			}
			else
			if(op==2)
			{
				printf("Gracias por tu compra, tu recarga fue de $300");
			}
			else
			if(op==3)
			{
				printf("Gracias por tu compra, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("Gracias por tu compra, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("Gracias por tu compra, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("Gracias por tu compra, tu recarga fue de $20");
			}
		}
		else
		if(op==4)
		{
			printf("*** Freedompop ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("Selecciona una opcion:");
			scanf("%d", &op);
			if(op==1)
			{
				printf("Gracias por tu compra, tu recarga fue de $500");
			}
			else
			if(op==2)
			{
				printf("Gracias por tu compra, tu recarga fue de $300");
			}
			else
			if(op==3)
			{
				printf("Gracias por tu compra, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("Gracias por tu compra, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("Gracias por tu compra, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("Gracias por tu compra, tu recarga fue de $20");
			}
		}
		else
		if(op==5)
		{
			printf("*** Virginmovil ***\n");
			printf("1. $500\n");
			printf("2. $300\n");
			printf("3. $200\n");
			printf("4. $100\n");
			printf("5. $50\n");
			printf("6. $20\n");
			printf("Selecciona una opcion:");
			scanf("%d", &op);
			if(op==1)
			{
				printf("Gracias por tu compra, tu recarga fue de $500");
			}
			else
			if(op==2)
			{
				printf("Gracias por tu compra, tu recarga fue de $300");
			}
			else
			if(op==3)
			{
				printf("Gracias por tu compra, tu recarga fue de $200");
			}
			else
			if(op==4)
			{
				printf("Gracias por tu compra, tu recarga fue de $100");
			}
			else
			if(op==5)
			{
				printf("Gracias por tu compra, tu recarga fue de $50");
			}
			else
			if(op==6)
			{
				printf("Gracias por tu compra, tu recarga fue de $20");
			}
	    }
		}/*Termina consultas del menu principal*/
		else /*Inicia pago de servicios del menu principal*/
		if(op==3)
		{
			printf("*** Pago de servicios ***\n");
			printf("1. Telmex\n");
			printf("2. Agua - SACMEX\n");
			printf("3. Luz - CFE\n");
			printf("4. Dish\n");
			printf("5. TotalPlay\n");
			printf("6. Predial\n");
			printf("Selecciona una opcion");
			scanf("%d", &op);
			if(op==1)
			{
				printf("*** Pago de servicio Telmex ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
				
			}
		   else 
		  if(op==2)
		  {  
			
			printf("*** Pago de servicio Agua ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
		   }
		   else
		   if(op==3)
		   {
		   	printf("*** Pago de servicio Luz ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
		   }
		   else
		   if(op==4)
		   {
		   	printf("*** Pago de servicio dish ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
		   }
		   else
		   if(op==5)
		   {
		   	printf("*** Pago de servicio totalplay ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
		   }
		   else
		   if(op==6)
		   {
		   	printf("*** Pago de servicio predial ***\n");
				printf("Ingresa la cantidad a pagar:");
				scanf("%f", &canti);
				printf("Tu pago fue de: $%.1f", canti);
		   }
		   
		   
		}
		else
		if(op==4)
		{
			printf("*** Transferencias ***\n");
		  printf("1. Bancomer\n");
		  printf("2. Banamex\n");
		  printf("3. HSBC\n");
		  printf("4. Santander\n");
		  printf("5. Banorte\n");
		  printf("Selecciona tu opcion:");
		  scanf("%d", &op);
		  if(op==1)
		  {
			printf("*** Bancomer ***\n");
			printf("Ingresa tu CLABE:\n");
			scanf("%f", &clabe);
			printf("Ingresa el monto a transferir:\n");
			scanf("%f", &canti);
			printf("Tu transferencia fue de: $%.1f", canti);
	 	  }
	 	  else
	 	  if(op==2)
	 	  {
	 	  	printf("*** Banamex ***\n");
			printf("Ingresa tu CLABE:\n");
			scanf("%f", &clabe);
			printf("Ingresa el monto a transferir:\n");
			scanf("%f", &canti);
			printf("Tu transferencia fue de: $%.1f", canti);
		   }
		   else
		   if(op==3)
		   {
		   	printf("*** HSBC ***\n");
			printf("Ingresa tu CLABE:\n");
			scanf("%f", &clabe);
			printf("Ingresa el monto a transferir:\n");
			scanf("%f", &canti);
			printf("Tu transferencia fue de: $%.1f", canti);
		   }
		   else
		   if(op==4)
		   {
		   	printf("*** Santander ***\n");
			printf("Ingresa tu CLABE:\n");
			scanf("%f", &clabe);
			printf("Ingresa el monto a transferir:\n");
			scanf("%f", &canti);
			printf("Tu transferencia fue de: $%.1f", canti);
		   }
		   else
		   if(op==5)
		   {
		   	 printf("*** Banorte ***\n");
			 printf("Ingresa tu CLABE:\n");
			 scanf("%f", &clabe);
			 printf("Ingresa el monto a transferir:\n");
			 scanf("%f", &canti);
			 printf("Tu transferencia fue de: $%.1f", canti);
		    }
		}
		else
		if(op==5)
		{
			printf("*** Depositos ***\n");
			printf("ingresa el monto a depositar:\n");
			scanf("%f", &canti);
			 printf("Tu deposito fue de: $%.1f", canti);
			
		}
		else
		if(op==6)
		{
			printf("*** Retiros ***\n");
			printf("ingresa el monto a retirar:\n");
			scanf("%f", &canti);
			 printf("Tu retiro fue de: $%.1f", canti);
		}
		
		
	return 0;
}

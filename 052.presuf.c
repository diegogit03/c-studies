#include <stdio.h>

void main(void)
{
	int valor = 1;

	printf("Usando sufixo %d\n", valor++);
	printf("Valor após o incremento %d\n", valor);
	valor = 1;
	printf("Usando prefixo %d\n", ++valor);
	printf("Valor após o incremento %d\n", valor);
}

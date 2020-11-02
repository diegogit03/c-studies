#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
	{
		float preco = 525.75;
		float imposto_vendas = 0.6;

		setlocale(LC_ALL, "Portuguese");
		printf("O custo do item é %f\n", preco);
		printf("O imposto sobre a venda do item é %f", preco * imposto_vendas);
	}
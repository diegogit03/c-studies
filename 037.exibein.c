#include <stdio.h>

void main()
	{
		int neg_int = -5;
		int pos_int = 5;
		float neg_flt = -100.23;
		float pos_flt = 100.23;

		printf("Os valores inteiros sao %+d e %+d\n", neg_int, pos_int);
		printf("Os valores em ponto flutuante sao %+f e %+f\n", neg_flt, pos_flt);
	}
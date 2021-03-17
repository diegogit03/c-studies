#include <stdio.h>

void main()
	{
		char *titulo_near = "Bíblia do Programador C/C++, do Jamsa!";
		char *titulo_far = "Bíblia do Programador C/C++, do Jamsa!";
		char far = *titulo_far;

		printf("Titulo do livro: %Ns\n", titulo_near);
		printf("Titulo do livro: %Fs\n", titulo_far);
	}

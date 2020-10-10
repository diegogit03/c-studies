#include <stdio.h>

void main(void)
    {
        float exato = 0.123456790987654321;
        double mais_exato = 0.1234567890987654321;

        printf("Valor de float\t %21.19f\n", exato);
        printf("Valor de double\t %21.19f\n", mais_exato);
    }

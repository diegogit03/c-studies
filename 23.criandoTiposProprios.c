/*

    Caso quisermos fazer uma especie de "herança de modificadores" em
    c podemos seguir o seguinte processo

*/

void main(void)
    {
        // maneira mais longa sem "herança"

        unsigned long int segundos_desde_janeiro;
        unsigned long int populacao_mundial_em_2020;

        // maneira mais otimizada

        typedef unsigned long int unlint;

        unlint segundos_desde_fevereiro;
        unlint populacao_mundial_em_2021;
    }

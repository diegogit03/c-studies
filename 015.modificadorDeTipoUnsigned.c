void main(void)
    {
        /*

            O modificador unsigned tira o bit de sinal da variavel, assim sendo possivel somente utilizar
            valores positivos.

            no tipo int:

            se o unsigned for utilizado em uma variavel do tipo int, o bit de sinal será removido, e será impossivel
            ter um numero negativo, e aumentará a limitação do numero inteiro, de 0 até 65.535.

            no tipo char:

            se o unsigned for utilizado em uma variavel do tipo char, o codigo ASCII não poderá ser negativo(pois o bit de sinal será removido)
            e terá uma limitação de 0 até 255.

        */

        unsigned int valor_maximo_com_unsigned = 65.535;
        unsigned char valor_maximo_do_char_ascii = 255;
    }

void main()
    {
        /*

            Registros

            Os registros são mais rápidos do que a memória para acessar, de modo que as variáveis que são
            mais usadas em um programa C podem ser colocadas em registros usando a palavra-chave de register.

            Quando utilizar

            Você deverá usar o modificador de tipo register com as variaveis que seu programa acessar repetidamente,
            tais como variáveis controladoras de um "laço de repetição" que o programa acessa a cada interação.

        */

        register int contador;
        register unsigned sinaliza_status;
    }

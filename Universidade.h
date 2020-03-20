#include <stdio.h>
// o pragma once serve para indicar o cabeçalho de pré
// compilação. Não sei se entendi muito bem a sua funcionalidade
// e talvez seja interessante marcar como DÚVIDA
#pragma once // DÚVIDAAAA!!!!!!!

// Vamos criar a classe Universidade, para associá-la
// aos objetos do tipo Pessoa que criamos
class Universidade {
    private:
        char nome[30];

    public: 
        Universidade(char* n="");

        void setNome(char* n);

        char* getNome();
};

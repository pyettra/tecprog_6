#include <stdio.h>
#include "Pessoa.h"

class Principal {
    private:
        Pessoa Rosa;
        Pessoa Ada;
        Pessoa Angela;
        Pessoa Pyettra;
        
        // Assim como inicializamos os objetos do tipo Pessoa,
        // precisamos inicializar os objetos do tipo Universidade

        Universidade UTFPR;
        Universidade Humboldt;
        Universidade Zurique;
        Universidade Turim;

        int dia;
        int mes;
        int ano;

    public:
        Principal();

        // Além da função construtora, faz-se necessária a função destrutora.
        // Essa é responsável por zerar os elementos, garantindo que memórias
        // utilizadas previamente sejam desalocadas.
        ~Principal();

        void Executar();       
};

// IMPORTAAAAAAAAANTEEEEEEEE!!!!!!!!!
// NÃO ESQUECER DO PONTO E VÍRGULA APÓS INICIALIZAÇÃO DA CLASSE NO ARQUIVO HEADER!!!

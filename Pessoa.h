#include <stdio.h>
#include "Universidade.h"

// Agora que temos uma classe do tipo Universidade,
// podemos associar um objeto do tipo Pessoa a um objeto
// do tipo Universidade. Mas como fazer isso?

// Simples! Basta criarmos um atributo Universidade
// a classe Pessoa e métodos que possibilitem associar 
// essa universidade ao objeto Pessoa criado.
// AH! E sem esquecer de incluir o arquivo de header da
// classe Universidade!

class Pessoa {
    private:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
        char nomeP[30];
        Universidade* pUnivFiliado; // aqui passamos uma referência a um objeto associado

    public:
        Pessoa(int diaP, int mesP, int anoP, char* nome="");

        Pessoa();

        void Inicializa(int diaP, int mesP, int anoP, char* nome="");

        void Calcula_Idade(int diaAt, int mesAt, int anoAt);

        int InformaIdade();

        void setUnivFiliado(Universidade* pUni); // associa a pessoa a uma universidade

        void getUni(); // mostra a qual universidade a pessoa é filiada

};

// IMPORTAAAAAAAAANTEEEEEEEE!!!!!!!!!
// NÃO ESQUECER DO PONTO E VÍRGULA APÓS INICIALIZAÇÃO DA CLASSE NO ARQUIVO HEADER!!!
#include <stdio.h>
#include <string.h>
#include "Universidade.h"

Universidade::Universidade(char* n) {
    strcpy(nome, n);
}

void Universidade::setNome(char* n) {
    strcpy(nome, n);
}

char* Universidade::getNome() {
    return nome;
}


#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"

class Professor : public Pessoa {
public:
    // Construtor da classe Professor
    Professor(std::string nome, int idade);

    // Sobrescreve o metodo para imprimir a idade
    void imprimeIdade() override;
};

#endif

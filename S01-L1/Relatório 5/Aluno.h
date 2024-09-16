#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa {
private:
    int matricula;  // Atributo privado matrícula

public:
    // Construtor da classe Aluno
    Aluno(std::string nome, int idade, int matricula);

    // Sobrescreve o método para imprimir a idade
    void imprimeIdade() override;

    // Método para imprimir a matrícula do aluno
    void imprimeMatricula();
};

#endif

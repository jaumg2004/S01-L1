#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa {
protected:
    std::string nome;
    int idade;

public:
    // Construtor da classe Pessoa
    Pessoa(std::string nome, int idade);

    // Metodo para imprimir o nome da pessoa
    void imprimeNome();

    // Metodo virtual para imprimir a idade
    virtual void imprimeIdade();
};

#endif

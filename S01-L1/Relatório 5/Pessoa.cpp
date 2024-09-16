#include "Pessoa.h"
#include <iostream>

// Construtor da classe Pessoa
Pessoa::Pessoa(std::string nome, int idade) : nome(nome), idade(idade) {}

// Metodo para imprimir o nome da pessoa
void Pessoa::imprimeNome() {
    std::cout << "O nome é: " << nome << std::endl;
}

// Metodo para imprimir a idade
void Pessoa::imprimeIdade() {
    std::cout << "Idade da pessoa: " << idade << std::endl;
}

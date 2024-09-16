#include "Professor.h"
#include <iostream>

// Construtor da classe Professor
Professor::Professor(std::string nome, int idade)
    : Pessoa(nome, idade) {}

// Sobrescreve o método para imprimir a idade
void Professor::imprimeIdade() {
    std::cout << "Idade do professor: " << idade << std::endl;
}

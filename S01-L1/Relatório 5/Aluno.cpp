#include "Aluno.h"
#include <iostream>

// Construtor da classe Aluno
Aluno::Aluno(std::string nome, int idade, int matricula)
    : Pessoa(nome, idade), matricula(matricula) {}

// Sobrescreve o método para imprimir a idade
void Aluno::imprimeIdade() {
    std::cout << "Idade do aluno: " << idade << std::endl;
}

// Método para imprimir a matrícula
void Aluno::imprimeMatricula() {
    std::cout << "Matrícula: " << matricula << std::endl;
}

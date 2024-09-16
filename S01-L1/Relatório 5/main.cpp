#include "Aluno.h"
#include "Professor.h"
#include "Pessoa.h"
#include <iostream>

int main() {
    // Criação dos objetos Aluno, Professor e Pessoa
    Aluno aluno1("João", 20, 12345);
    Professor professor1("Carlos", 40);
    Pessoa pessoa1("Maria", 30);

    // Imprimindo informações do Aluno
    aluno1.imprimeNome();
    aluno1.imprimeIdade();
    aluno1.imprimeMatricula();

    // Imprimindo informações do Professor
    professor1.imprimeNome();
    professor1.imprimeIdade();

    // Imprimindo informações da Pessoa
    pessoa1.imprimeNome();
    pessoa1.imprimeIdade();

    return 0;
}

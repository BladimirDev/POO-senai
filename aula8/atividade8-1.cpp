#include <iostream>

using namespace std;

class Aluno {
private:
    string nome;
    int matricula;

public:
    Aluno() {
    }

    Aluno(string n, int m) {
        nome = n;
        matricula = m;
    }

    void exibir() {
        cout << "Nome: " << nome << " | Matricula: " << matricula << endl;
    }
};

class Turma {
private:
    string nomeTurma;
    Aluno* alunos[10];
    int quantidade;

public:
    Turma() {
        quantidade = 0;
    }

    Turma(string nome) {
        nomeTurma = nome;
        quantidade = 0;
    }

    void adicionarAluno(Aluno* aluno) {
        alunos[quantidade] = aluno;
        quantidade++;
    }

    void listarAlunos() {

        cout << endl;
        cout << "Turma: " << nomeTurma << endl;

        for(int i = 0; i < quantidade; i++) {
            alunos[i]->exibir();
        }
    }
};

int main() {
    //Criacao dos alunos
    Aluno a1("Carlos", 101);
    Aluno a2("Maria", 102);
    Aluno a3("Joao", 103);
    Aluno a4("Ana", 104);
    Aluno a5("Pedro", 105);

    //Criacao das turmas
    Turma t1("Turma A");
    Turma t2("Turma B");

    //Primeira turma
    t1.adicionarAluno(&a1);
    t1.adicionarAluno(&a2);
    t1.adicionarAluno(&a3);

    //Segunda turma
    t2.adicionarAluno(&a3);
    t2.adicionarAluno(&a4);
    t2.adicionarAluno(&a5);

    t1.listarAlunos();
    t2.listarAlunos();

    return 0;
}
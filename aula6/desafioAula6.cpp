#include <iostream>
using namespace std;

class ReservaLab {
private:
    string nomeAluno;
    double tempoUso;
    int numeroMaquina;
    int* historicoAcessos;
    int quantidadeAcessos;
    int capacidade;

public:
    //Construtor default
    ReservaLab(){
        nomeAluno = "indefinido";
        tempoUso = 0;
        numeroMaquina = 0;
        quantidadeAcessos = 0;
        capacidade = 10;
        historicoAcessos = new int[capacidade];
    }
    //constrututor com nome do aluno e numero da maquina
    ReservaLab(string nomAl, int numMaq){
        nomeAluno = nomAl;
        tempoUso = 30;
        numeroMaquina = numMaq;
        quantidadeAcessos = 0;
        capacidade = 10;
        historicoAcessos = new int[capacidade];
    }
    //construtor com todos os atributos
    ReservaLab (string nomAl, int numMaq, double tempUs){
        nomeAluno = nomAl;
        tempoUso = tempUs;
        numeroMaquina = numMaq;
        quantidadeAcessos = 0;
        capacidade = 10;
        historicoAcessos = new int[capacidade];
    }

    void registrarAcesso(int codAcs){
        if (quantidadeAcessos < capacidade) {
            historicoAcessos[quantidadeAcessos] = codAcs;
            quantidadeAcessos++;
        } else {
            cout << "Limite de acessos atingido" << endl;
        }
    }

    void mostrarReserva(){
        cout << "----Dados da reserva----" << endl;
        cout << "Nome do aluno: " << nomeAluno << endl;
        cout << "Tempo de uso: " << tempoUso << endl;
        cout << "Numero da maquina: " << numeroMaquina << endl;
        cout << "Quantidade de acessos: " << quantidadeAcessos << endl;
        cout << endl;
    }
    void mostrarHistorico (){
        cout << "----Historico de reservas----" << endl; 
        for(int i = 0; i<quantidadeAcessos; i++){
            cout << i+1 << ": " << historicoAcessos[i] << endl;
        }
        cout << endl;
    }
    ~ReservaLab(){
        delete[] historicoAcessos;
        cout << "Objeto destruido" << endl;
        cout << endl;
    }
};

int main (){
    ReservaLab r1;
    r1.registrarAcesso(100001);
    r1.registrarAcesso(100002);
    r1.mostrarReserva();
    r1.mostrarHistorico();
    {
        ReservaLab r2("Blad" , 1);
        r2.registrarAcesso(200001);
        r2.registrarAcesso(200002);
        r2.mostrarReserva();
        r2.mostrarHistorico();
    }

    ReservaLab r3("Dani", 2, 60);
    r3.registrarAcesso(300001);
    r3.registrarAcesso(300002);
    r3.mostrarReserva();
    r3.mostrarHistorico();

    ReservaLab* r4 = new ReservaLab("Edgardo", 3, 45);
    r4->registrarAcesso(400001);
    r4->registrarAcesso(400002);
    r4->mostrarReserva();
    r4->mostrarHistorico();
    delete r4;
}
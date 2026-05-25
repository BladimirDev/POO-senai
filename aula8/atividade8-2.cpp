#include <iostream>
using namespace std;

class Motor {
private:
    int potencia;

public:
    Motor(int p) {
        potencia = p;
    }

    void exibir() {
        cout << "Potencia do motor: "
             << potencia << " CV" << endl;
    }
};

class Carro {
private:
    string modelo;
    Motor* motor;

public:
    Carro(string m, int potenciaMotor) {

        modelo = m;

        //criando o motor dentro do carro
        motor = new Motor(potenciaMotor);
    }

    void exibir() {

        cout << endl;
        cout << "Carro: " << modelo << endl;

        motor->exibir();
    }

    ~Carro() {

        //apagando o motor
        delete motor;

        cout << "Motor do carro "
             << modelo
             << " foi apagado" << endl;
    }
};

int main() {

    Carro c1("Fusca", 400);
    Carro c2("Civic", 132);
    Carro c3("Ferrari", 502);
    Carro c4("Voyage", 860);

    c1.exibir();
    c2.exibir();
    c3.exibir();
    c4.exibir();

    return 0;
}
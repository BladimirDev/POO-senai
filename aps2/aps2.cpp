#include <iostream>
#define ANO 2026

using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    int ano;
    int km;
    double combustivel;

public:
    //Construtor
    Carro(string m, string mo, int a, int k, double c) {
        marca = m;
        modelo = mo;

        setAno(a);
        setKm(k);
        setCombustivel(c);
    }

    //SETTERS
    void setMarca(string m) {
        marca = m;
    }

    void setModelo(string mo) {
        modelo = mo;
    }

    void setAno(int a) {

        if(a >= 1886 && a <= ANO) {
            ano = a;
        } else {
            cout << "Ano invalido!" << endl;
            ano = 0;
        }
    }

    void setKm(int k) {

        if(k >= 0) {
            km = k;
        } else {
            cout << "Km invalido!" << endl;
            km = 0;
        }
    }

    void setCombustivel(double c) {

        if(c >= 0) {
            combustivel = c;
        } else {
            cout << "Combustivel invalido!" << endl;
            combustivel = 0;
        }
    }

    // GETTERS
    string getMarca() {
        return marca;
    }

    string getModelo() {
        return modelo;
    }

    int getAno() {
        return ano;
    }

    int getKm() {
        return km;
    }

    double getCombustivel() {
        return combustivel;
    }

    // METODOS
    void aumentarKm(int k) {

        if(k > 0) {
            km += k;
        } else {
            cout << "Valor invalido!" << endl;
        }
    }

    void abastecer(double litros) {

        if(litros > 0) {
            combustivel += litros;

            cout << "Abastecimento realizado!" << endl;
        } else {
            cout << "Quantidade invalida!" << endl;
        }
    }

    void dirigir(int distancia) {
        if(distancia <= 0) {
            cout << "Distancia invalida!" << endl;
            return;
        }

        //Cada litro faz 10 km
        double necessario = distancia / 10.0;

        if(combustivel >= necessario) {

            combustivel -= necessario;
            km += distancia;

            cout << "Viagem realizada!" << endl;

        } else {
            cout << "Combustivel insuficiente!" << endl;
        }
    }

    void ipva() {
        if(ano < ANO - 20) {

            cout << "O carro nao paga IPVA!" << endl;

        } else {

            cout << "O carro paga IPVA!" << endl;
        }
    }

    void exibir() {
        cout << endl;
        cout << "===== DADOS DO CARRO =====" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Km: " << km << endl;
        cout << "Combustivel: " << combustivel << " litros" << endl;
    }
};

int main() {
    //Criando objetos usando construtor
    Carro c1("Chevrolet", "Astra", 2006, 100000, 20);
    Carro c2("Honda", "Civic", 2020, 50000, 15);

    //Exibindo dados iniciais
    c1.exibir();
    c2.exibir();

    //Abastecendo
    c1.abastecer(5);

    //Dirigindo
    c1.dirigir(100);

    //Atualizando km
    c2.aumentarKm(500);

    //Verificando IPVA
    c1.ipva();
    c2.ipva();

    //Exibindo dados atualizados
    c1.exibir();
    c2.exibir();



    return 0;
}
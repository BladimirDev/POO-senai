#include <iostream>
#define ANO 2026
using namespace std;

//Classe base
class Carro {
protected:
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

    //GETTERS
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

    //Metodo virtual
    virtual void exibir() {

        cout << endl;
        cout << "===== DADOS DO CARRO =====" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Km: " << km << endl;
        cout << "Combustivel: " << combustivel << " litros" << endl;
    }

    //Metodo virtual para polimorfismo
    virtual void tipoCarro() {
        cout << "Carro comum" << endl;
    }
};

// Classe derivada
class CarroEsportivo : public Carro {
private:
    int potencia;

public:
    //Construtor
    CarroEsportivo(string m, string mo, int a, int k, double c, int p)
        : Carro(m, mo, a, k, c) {
        potencia = p;
    }

    //Setter
    void setPotencia(int p) {
        if(p > 0) {
            potencia = p;
        } else {
            cout << "Potencia invalida!" << endl;
        }
    }

    //Getter
    int getPotencia() {
        return potencia;
    }

    //Override do exibir
    void exibir() override {
        cout << endl;
        cout << "===== DADOS DO CARRO ESPORTIVO =====" << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Km: " << km << endl;
        cout << "Combustivel: " << combustivel << " litros" << endl;
        cout << "Potencia: " << potencia << " CV" << endl;
    }
 
    //Override do tipo de carro
    void tipoCarro() override {
        cout << "Este e um carro esportivo!" << endl;
    }

    //Metodo especifico
    void turbo() {
        cout << "Modo Turbo ativado!! Aperten o cinto que o negocio e brabo" << endl;
    }
};

//Outra classe derivada
class CarroEletrico : public Carro {
private:
    int bateria;

public:
    //Construtor
    CarroEletrico(string m, string mo, int a, int k, double c, int b)
        : Carro(m, mo, a, k, c) {
        bateria = b;
    }

    //Override de exibir
    void exibir() override {

        cout << endl;
        cout << "===== DADOS DO CARRO ELETRICO =====" << endl;

        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Km: " << km << endl;
        cout << "Bateria: " << bateria << "%" << endl;
    }

    // Override
    void tipoCarro() override {
        cout << "Este e um carro eletrico!" << endl;
    }

    // Metodo especifico
    void carregarBateria() {
        bateria = 100;
        cout << "Bateria carregada!" << endl;
    }
};

int main() {
    // Polimorfismo
    Carro* c1 = new CarroEsportivo(
        "Ferrari",
        "F8",
        2024,
        5000,
        50,
        720
    );

    Carro* c2 = new CarroEletrico(
        "Tesla",
        "Model S",
        2025,
        1000,
        0,
        80
    );

    // Funcionamento do polimorfismo
    c1->exibir();
    c1->tipoCarro();

    c2->exibir();
    c2->tipoCarro();

    // Liberando memoria
    delete c1;
    delete c2;

    return 0;
}
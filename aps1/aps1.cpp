#include <iostream>
#define ANO 2026

using namespace std;

class Carro {
private:
    string marca;
    string modelo;
    int ano;
    int km;
    
public:
    void setMarca(string m){ //Seteamos a marca do carro
        marca = m;
    }

    void setModelo(string mo){ //Seteamos o modelo do carro
        modelo = mo;
    }

    void setAno(int a){ //Seteamos o ano do carro
        if(ANO <a || a < 1886){ //O ano deve estar entre a atualidade e o ano do primeiro carro criado, alem disso, o ano nao pode ser negativo
            cout << "O ano inserido nao e valido" << endl;
        } else {
            ano = a;
        }
    }

    void setkm(int k){ //Seteamos a kilometragem do carro
        if(k < 0){ //A kilometragem nao pode ser negativa
            cout << "A kilometragem inserida nao e valida" << endl;
        } else {
            km = k;
        }
    }

    void aumentarKm(int k){ //Aumentamos a kilometragem do carro
        if(k < 0){ //A kilometragem nao pode ser negativa
            cout << "A kilometragem inserida nao e valida" << endl;
        } else {
            km += k;
        }
    }

    void ipva(){ //Calculamos o valor do IPVA do carro
        if (ano < ANO - 20){
            cout << "O carro não paga ipva!" << endl;
        }else{
            cout << "O carro paga ipva!" << endl;
        }
    }

    string getMarca(){
        return marca;
    }

    string getModelo(){
        return modelo;
    }

    int getAno(){
        return ano;
    }

    int getKm(){
        return km;
    }

    void exibir(){ //Exibimos as informacoes do carro
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Km: " << km << endl;
    }
};

int main(){
    Carro c1;
    
    c1.setMarca("Chevrolet");
    c1.setModelo("Astra");
    c1.setAno(2006);
    c1.setkm(100000);
    
    c1.exibir();
    
    c1.aumentarKm(10000);
    
    cout << "Km atualizado: " << c1.getKm() << endl;
    
    c1.ipva();
    
    return 0;
}


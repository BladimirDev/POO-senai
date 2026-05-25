#include <iostream>
using namespace std;

class Conta{
	private:
		double saldo;
	
	public:
		Conta(double s){
			//se for menor que 0 vai ser iniciado como 0
			if(s <= 0){
				saldo = 0;
			}
			//se não for menor que 0 vai só setar o valor
			else{
				saldo = s;
			}
		}
		
		void depositarValor (double v) {
			if (v > 0) {
				saldo = saldo + v;
			}
			
			else{
				cout << "O valor definido e invalido" << endl;
			}
		}
		
		bool sacar (double v) {
			if (v < saldo) {
				saldo = saldo - v;
				return true;
			}
			return false;
		}
		
		double getSaldo(){
			return saldo;
		}
};

int main (){
	Conta c1(1550.13);
	cout << "Saldo atual: " << c1.getSaldo() << endl;
	
	c1.depositarValor(300);
	cout << "Saldo atual: " << c1.getSaldo() << endl;
	
	c1.sacar(1000);
	cout << "Saldo final: " << c1.getSaldo() << endl;
}
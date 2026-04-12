#include <iostream>

using namespace std;

class Produto{
	private:
		string nome;
		float preco;
		
	public:
		string getNome(){
			string n = nome;
			return n;
		}
		
		void setNome (string n){
			nome = n;
		}
		
		float getPreco(){
			float p = preco;
			return p;
		}
		
		void setPreco(float p){
			if (p < 0){
				cout << "O valor inserido nao e Valido" << endl;
			}else{
				preco = p;
			}
			
		}
};

int main (){
	Produto p1;
	
	p1.setNome("Maionese");
	p1.setPreco(10.30);

	cout << "Nome: " << p1.getNome() << " | " << "Preco: " << p1.getPreco() << endl;
	
	return 0;
}
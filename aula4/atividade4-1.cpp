#include <iostream>
using namespace std;

class Aluno {
	private:
		string nome;
		int matricula;
		
	public:
		void setNome(string n){
			nome = n;
		}

		string getNome(){
			return nome;
		}
		
		void exibir(){
			cout << "Nome: " << nome << endl;
			cout << "Matricula: " << matricula << endl;
			cout << endl;
		}
};

int main (){
	Aluno a1;
	
	a1.setNome("Blady");
	a1.getNome();
	a1.exibir();
	
	return 0;
}
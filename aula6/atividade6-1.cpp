#include <iostream>
using namespace std;

class Pessoa{
	public:
		string nome;
		int idade;
	
		Pessoa(){
			nome = "Indefinido";
			idade = 0;
		}
		Pessoa(string n){
			nome = n;
			idade = 20;
		}
		Pessoa(string n, int id){
			nome = n;
			idade = id;
		}
};


int main (){
	Pessoa p1;
	Pessoa p2("Prandel");
	Pessoa p3("Dani", 18);
	
	cout << p1.nome << " | " << p1.idade << endl;	
	cout << p2.nome << " | " << p2.idade << endl;
	cout << p3.nome << " | " << p3.idade << endl;
	return 0;
}
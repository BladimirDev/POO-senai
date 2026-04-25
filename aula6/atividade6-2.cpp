#include <iostream>
using namespace std;

class Mensagem{
	private:
		string msg;
		
	public:
		string getMsg(){
			return msg;
		}
		
		Mensagem(){
			msg = "Indefinido";
			cout << "Objeto Criado" << endl;
		}
		
		Mensagem(string m){
			msg = m;
			cout << "Objeto Criado" << endl;
		}
		
		~Mensagem(){
			cout << "Objeto Destruido" << endl;
		}
};

int main (){
	Mensagem m1;
	{
		Mensagem m2("Bem vindo a o melhor software da face da terra");
		cout << "Mensagem 2: " << m2.getMsg() << endl;
		{
			Mensagem m3("Essa mensagem é um teste de escopos xd");
			cout << "Mensagem 3: " << m3.getMsg() << endl;
		}
	}
	
	
	cout << "Mensagem 1: " << m1.getMsg() << endl;
}
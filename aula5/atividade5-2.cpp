#include <iostream>

using namespace std;

class Cliente {
	public:
		string nome;
		string setNome;
};

class Pedido {
	public:
		Cliente cliente;
		void mostrarCliente() {
			cout << cliente.nome << endl;
		}
};
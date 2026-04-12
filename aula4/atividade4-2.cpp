#include <iostream>

using namespace std;

class Pagamento{
	private:
		double valor;
		string tipo;
		
	public:
		void setPagamento(string t){
		}
};

class Pedido{
	private:
		int id;
		Pizza pizzas;
		Pagamento pagamento;
};

class Pizza {
	public:
		string sabor;
		string tamanho;
		double preco;
};

class Cliente{
	private:
		string nome;
		string endereco;
		bool entrega;
		Pedido pedidos[];
	
	public:
		void fazerEntrega(bool f, string e){
		}
		
		void fazerPedido(string sabor, string tamanho){
		}
};

int main (){
	return 0;
};
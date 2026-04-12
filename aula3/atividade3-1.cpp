#include <iostream>

using namespace std;

class Usuario {
	public:
		string email;
		string senha;
		
		Usuario(string em, string pass){
			email = em;
			senha = pass;
		}
		
		void criarPerfil (){
		}
		
		void alterarPerfil(){
		}
};

class Perfil {
	public:
		int seguidores;
		int curtidas;
		int posts;
		int id;
		
		Perfil(int seg, int curt, int posts, int id){
			seguidores = seg;
			curtidas = curt;
			posts = posts;
			id = id;
		}
		
		void comentarPost(){
		}
		
//		bool curtirPost(){
//		}
		
		void entrarGrupo(){
		}
		
		void entrarConversa(){
		}
};

class FotoPerfil{
	public:
		string foto;
		
		FotoPerfil(string foto){
			foto = foto;
		}
		
//		bool mostrarFoto(){
//		}
		
		void abrirFoto(){
		}
};

class Comentario{
	public:
		string perfil;
		string texto;
		int curtidas;
		
		Comentario(string perf, string text, int curt){
			perfil = perf;
			texto = text;
			curtidas = curt;
		}
		
		void mostrarComentario(){
		}
		
//		int registrarCurtidas(){
//		}
};

class Post {
	public:
		int curtidas;
		int visualizacoes;
		int comentarios;
		
		Post (int curt, int visu, int com){
			curtidas = curt;
			visualizacoes = visu;
			comentarios = com;
		}
		
		void mostrarPost(){
		}
		
//		int registrarCurtidas(){
//		}
		
		void armazenarComentarios(){
		}
};

class Grupo {
	public:
		string nome;
		int membros;
		
		Grupo(string nm, int mem){
			nome = nm;
			membros = mem;
		}
		
		void armazenarPerfis(){
		}
		
		void adicionarPessoas(){
		}
		
		void eliminarPessoas(){
		}
};

class Mensagens{
	public:
		string texto;
		string perfil;
		
		Mensagens(string text, string perf){
			texto = text;
			perfil = perf;
		}
		
		void enviarMensagens(){
		}
		
//		int identificarPerfil(){
//		}
		
};

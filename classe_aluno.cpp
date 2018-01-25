/*

Programa que implementa uma classe chamada aluno para calcular
mensalidades de acordo situacao: sem bolsa, meio-bolsista ou bolsista.

*/

#include<iostream>
#include<string>
using namespace std;
class Aluno{
	private:
		string nome;
		int qtd;
	public:
		Aluno(){
			qtd=0;
		}
		~Aluno(){}
		void set_dados(){
			cout<<"\nDigite o Nome: "; getline(cin,nome);
			cout<<"\nDigite qtd de disciplinas: "; cin>>qtd;
			cin.ignore();
		}
		void print_dados(){
			cout<<"\nNome: "<<nome;
			cout<<"\nQtd de Disciplinas: "<<qtd;
		}
		float mensalidade(){
			float ma;
			ma=(200*qtd);
			return ma;
		}
};
class Bolsista:public Aluno{

	public:
		float mensalidade(){
			float mb;
			mb=Aluno::mensalidade();
			return mb*0.5;
		}
};
class Meio_Bolsista:public Aluno{

	public:
		float mensalidade(){
			float mmb;
			mmb=Aluno::mensalidade();
			return mmb*0.75;
		}
};
int main(){
	Aluno X;
	Bolsista Y;
	Meio_Bolsista Z;
	X.set_dados();
	X.print_dados();
	cout<<"\nSua mensalidade e de: "<<X.mensalidade();
	Y.set_dados();
	Y.print_dados();
	cout<<"\nSua mensalidade e de: "<<Y.mensalidade();
	Z.set_dados();
	Z.print_dados();
	cout<<"\nSua mensalidade e de: "<<Z.mensalidade();

	cout<<"\n\n";
	return 0;
}

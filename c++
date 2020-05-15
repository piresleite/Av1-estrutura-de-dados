#include<iostream>
using namespace std;

struct Lista {
	int num;
	int idade, sexo, gravidez;
	string cpf;
	Lista *prox, *ant;
};

int idade, sexo, gravidez;
string cpf;
int leiaValor() {

		
}
int main(void) {
	setlocale(LC_ALL, "");	
	Lista *inicio = NULL, *fim=NULL, *aux = NULL;
	int op=0, numero=0, achou = 0;
		
	while(op != 7) {
		cout<<"\n\t 1-Cadastrar paciente";
		cout<<"\n\t 2-Consultar fila de pacientes";
	    cout<<"\n\t 3-Esvaziar a fila";
		cout<<"\n\t 4-Sair";
		cout<<"\n\t Escolha Opcao:"<<endl;
		cin>>op;
		if (op==1) {
			cout<<"\n Digite sua idade: "<<endl;
	cin>>idade;
	cout<<"\n Digite seu cpf: "<<endl;
	cin>>cpf;
	cout<<"\n Digite 1 para o sexo feminino e 2 para o masculino: "<<endl;
	cin>>sexo;
	if(sexo == 1){
		cout<<"\n Você está grávida? 1- Sim 2- Não:"<<endl;
		cin>>gravidez;
	}
	Lista *novo = new Lista;
	novo->num = +1;
	if (inicio == NULL) {
			inicio = novo;
				fim = novo;
				cout<< "novo"<<novo;
				novo->prox = NULL;
				novo->ant = NULL;
			}else {
				novo->prox = inicio;
				cout<<"+1 prox"<<inicio;
				inicio->ant=novo;
				cout<<"+1 ant"<<inicio;
				novo->ant=NULL;
				inicio=novo;
			}
	
		
		}
	
		
		if(op ==2 ) { 
			if (inicio == NULL) {
				cout<<"\nFila Vazia"<<endl;
			}else {
				aux = inicio;
				while (aux != NULL){
					cout<<"\nIdade: "<<idade<<endl;
					cout<<"\nCPF: "<<cpf<<endl;
					cout<<"\nSexo: "<<sexo<<endl;
					aux=aux->prox;
				}
			}
		}
		
	
		
		if (op==3) {
			if (inicio == NULL) {
				cout<<"\nLista Vazia"<<endl;
			}else {
				aux = inicio;
				while (aux != NULL){
					inicio=inicio->prox;
					delete(aux);
					aux=inicio;
					
				}
			}
		}
	}
	
	return 1;
}

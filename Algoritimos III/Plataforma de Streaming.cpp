#include <iostream>
#include <string>
using namespace std;

struct Filme
{
	string nome;
	string genero;
	int duracao;
	int classificacao;
	int ano;
};

struct treenode
{
	Filme info;
	treenode *esq;
	treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, Filme info)
{
	if (p == NULL) // insere na raiz
	{
		p = new treenode;
		p->info = info;
		p->esq = NULL;
		p->dir = NULL;
	}
	else if (info.nome < p->info.nome) // insere na subarvore esquerda
		tInsere(p->esq, info);
	else // insere na subarvore direita
		tInsere(p->dir, info);
}

treenodeptr tPesq(treenodeptr p, string nome)
{
	if (p == NULL) // elemento nao encontrado
		return NULL;
	else if (nome == p->info.nome) // elemento encontrado na raiz
		return p;
	else if (nome < p->info.nome) // procura na sub´arvore esquerda
		return tPesq(p->esq, nome);
	else // procura na sub´arvore direita
		return tPesq(p->dir, nome);
}

int main()
{
	Filme info;
	int op;
	string nome;

	treenodeptr arvore = NULL; // armazena os numeros

	cin >> op;

	while(op != 0)
	{
		if(op == 1)
		{
			getline(cin >> ws, info.nome);
			getline(cin >> ws, info.genero);
			cin >> info.duracao;
			cin >> info.classificacao;
			cin >> info.ano;
			tInsere(arvore, info);
		}
		else if(op == 2)
		{
			getline(cin >> ws, nome);

			treenodeptr result;
			result = tPesq(arvore, nome);
			if(result == NULL)
				cout << "Filme nao encontrado" << endl;
			else
			{
				cout << "Nome: " << result->info.nome << endl;
				cout << "Genero: " << result->info.genero << endl;
				cout << "Duracao: " << result->info.duracao << " mins" << endl;
				cout << "Classificacao: " << result->info.classificacao << endl;
				cout << "Ano: " << result->info.ano << endl;
			}

		}
		else
			cout << "Operacao invalida" << endl;
		cin >> op;
	}

	return 0;
}

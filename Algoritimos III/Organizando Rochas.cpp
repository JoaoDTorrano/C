#include <iostream>
#include <string>
using namespace std;

struct Rocha
{
	string nome;
	string tipo;
};

struct treenode
{
	Rocha info;
	treenode *esq;
	treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, Rocha info)
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

treenodeptr tMenor(treenodeptr &raiz)
{
	treenodeptr t;
	t = raiz;
	if (t->esq == NULL) // encontrou o menor valor
	{
		raiz = raiz->dir;
		return t;
	}
	else // continua a busca na sub´arvore esquerda
		return tMenor(raiz->esq);
}


int tRemove(treenodeptr &raiz, string nome, string tipo)
{
	treenodeptr p;
	if (raiz == NULL) // ´arvore vazia
		return 1;
	if (nome == raiz->info.nome && tipo == raiz->info.tipo)
	{
		p = raiz;
		if (raiz->esq == NULL) // a raiz n~ao tem filho esquerdo
			raiz = raiz->dir;
		else if (raiz->dir == NULL) // a raiz n~ao tem filho direito
			raiz = raiz->esq;
		else // a raiz tem ambos os filhos
		{
			p = tMenor(raiz->dir);
			raiz->info = p->info;
		}
		delete p;
		return 0;
	}
	else if (nome < raiz->info.nome)
		return tRemove(raiz->esq, nome, tipo);
	else
		return tRemove(raiz->dir, nome, tipo);
}


int main()
{
	Rocha info;
	int op;
	string nome;
	string tipo;

	treenodeptr arvore = NULL; // armazena os numeros
	treenodeptr result;

	cin >> op;

	while(op != 0)
	{
		if(op == 1)
		{
			getline(cin >> ws, info.nome);
			getline(cin >> ws, info.tipo);
			tInsere(arvore, info);
		}
		else if(op == 2)
		{
		    getline(cin >> ws, nome);
			result = tPesq(arvore, nome);
			if(result == NULL)
			   cout << "Rocha nao encontrada" << endl;
			else
			{
				cout << "Nome:" << result->info.nome << endl;
				cout << "Tipo:" << result->info.tipo << endl;
			}

		}
		else if(op == 3)
		{
			getline(cin >> ws, nome);
			getline(cin >> ws, tipo);
			if( tRemove(arvore, nome, tipo) == 1)
				cout << "Rocha nao encontrada para remocao" << endl;
			else
				cout << "Rocha removida com sucesso" << endl;

		}
		cin >> op;
	}

	return 0;
}

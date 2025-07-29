#include <iostream>
using namespace std;

struct treenode
{
int info;
treenode *esq;
treenode *dir;
};
typedef treenode *treenodeptr;

void tInsere(treenodeptr &p, int x)
{
if (p == NULL) // insere na raiz
{
p = new treenode;
p->info = x;
p->esq = NULL;
p->dir = NULL;
}
else
if (x < p->info) // insere na subarvore esquerda
tInsere(p->esq,x);
else // insere na subarvore direita
tInsere(p->dir,x);
}

int main()
{
int x=0; // variavel auxiliar para leitura de dados
treenodeptr arvore = NULL; // armazena os numeros
while (x != -1)
{
cout << "Digite elemento a ser inserido:\n";
cin >> x;
if (x != -1)
tInsere(arvore,x);
}
return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int N;// contas
    int nAmigos[1000];// numero de seguidores
    int Ma;
    int Me;
    int i;
    
    cin >> N;
    
    for(i = 0; i < N; i++)
       cin >> nAmigos[i];
       
    Ma = -50000;
    Me = 50000;
    
    for(i = 0; i < N; i++)
    {
        if(nAmigos[i] > Ma)
           Ma = nAmigos[i];
           
        if(nAmigos[i] < Me)
           Me = nAmigos[i];   
    }
    
    cout << "Menor numero de contatos: " << Me << endl;
    cout << "Maior numero de contatos: " << Ma << endl;
    return 0;
}
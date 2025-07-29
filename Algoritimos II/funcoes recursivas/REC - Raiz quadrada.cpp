#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float raiz(float x, float x0, float E)
{
    if((pow(x0, 2) - x) <= E)
       return x0;
    else
       return raiz(x, ((pow(x0, 2) + x)/(2 * x0)), E);
}

int main()
{
    float x, x0, E;
    
    cin >> x >> x0 >> E;
    
    cout << fixed << setprecision(4);
    cout << raiz(x, x0, E) << endl;
    
    return 0;
}

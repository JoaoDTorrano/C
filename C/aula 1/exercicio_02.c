#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int resto[50];
    scanf("%d", &n);
    if(n >= 0 && n <= 50){
        for(int i = n - 1; i > 0; i--){
            resto[i] = n%i;
            printf("resto da divisao de %d por %d: %d\n",n,i,resto[i]);
        }
    }
    else
    {
        printf("Numero errado digite de novo um numero de 0 a 50");
    }
}
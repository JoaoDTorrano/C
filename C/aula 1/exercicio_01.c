#include <stdio.h>

int main(){
    float laranja;
    int unidades;
    float preco_final;

    scanf("%d", &unidades);

    if(unidades >= 12)
    {
        laranja = 0.65;
        preco_final = unidades * laranja;
    }
    else
    {
        laranja = 0.80;
        preco_final = unidades * laranja;
    }

    printf("Preco do unidade: %.2f\n", laranja);
    printf("Preco total: %.2f\n", preco_final);
    
    return 0;
}
#include <stdio.h>

void varreMatriz(int v[10][10], int n){
    int par = 0;
    int impar = 0;
    int positivo = 0;
    int negativo = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++){
            if(v[i][j] % 2 == 0) {
                par++;
            } else {
                impar++;
            }
            if(v[i][j] >= 0) {
                positivo++;
            } else if(v[i][j] < 0) {
                negativo++;
            }
        }
    }
    printf("Pares: %d\n", par);
    printf("Impares: %d\n", impar);
    printf("Positivos: %d\n", positivo);
    printf("Negativos: %d\n", negativo);
}

int main() {
    int n;
    int v[10][10];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++){
            scanf("%d", &v[i][j]);
        }
    }
    
    varreMatriz(v, n);
    return 0;
}
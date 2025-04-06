#include <stdio.h>

int numerosImpares(int n, int i);

int main() {
    int numero, numeroInicial;

    printf("Digite um número: ");
    scanf("%d", &numero);

    numerosImpares(numero, 1);

    return 0;
}

int numerosImpares(int n, int i) {
    if(i <= n) {
        printf("%d ", i);
        i += 2;
        return numerosImpares(n, i);
    }
}

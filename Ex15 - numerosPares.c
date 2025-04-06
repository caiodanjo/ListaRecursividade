#include <stdio.h>

int numerosPares(int n, int i);

int main() {
    int numero, numeroInicial;

    printf("Digite um número: ");
    scanf("%d", &numero);

    numerosPares(numero, 0);

    return 0;
}

int numerosPares(int n, int i) {
    if(i <= n) {
        printf("%d ", i);
        i += 2;
        return numerosPares(n, i);
    }
}

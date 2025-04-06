#include <stdio.h>

int numeroPrimo(int n);
int numeroPrimoRec(int n, int i);

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numeroPrimo(numero)) {
        printf("%d é primo.\n", numero);
    } else {
        printf("%d não é primo.\n", numero);
    }

    return 0;
}

int numeroPrimo(int n) {
    return numeroPrimoRec(n, 2);
}

int numeroPrimoRec(int n, int i) {
    if (n <= 1) {
        return 0;
    } else if (i * i > n) {
        return 1;
    } else if (n % i == 0) {
        return 0;
    }

    return numeroPrimoRec(n, i + 1);
}

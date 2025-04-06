#include <stdio.h>

int converterDecimal(int n);

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero == 0) {
        printf("0");
    } else {
        converterDecimal(numero);
    }

    return 0;
}

int converterDecimal(int n) {
    if(n == 0) {
        return 0;
    } else {
        converterDecimal(n / 2);
        printf("%d", n % 2);
    }
}

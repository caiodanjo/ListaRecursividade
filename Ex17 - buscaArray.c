#include <stdio.h>

int buscaArray(int array[], int n, int indice);

int main() {
    int array[4] = {2, 4, 6, 8}, numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(buscaArray(array, numero, 4)) {
        printf("O número %d está no array.", numero);
    } else {
        printf("O número %d não está no array.", numero);
    }

    return 0;
}

int buscaArray(int array[], int n, int indice) {
    if(indice == 0) {
        return 0;
    }
    
    if(array[0] == n) {
        return 1;
    }
    
    return buscaArray(array + 1, n, indice - 1);
}

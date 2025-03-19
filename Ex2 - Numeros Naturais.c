#include <stdio.h>

int somaNNaturais (int n);

int main() {
    int n = 4, soma;
    
    soma = somaNNaturais(n);
    
    printf("A soma e igual a: %d", soma);

    return 0;
}

int somaNNaturais (int n) {
	int soma; 
	
	if(n <= 0) {
		return (0);
	} else {
		soma = n + somaNNaturais(n - 1);
		return soma;
	}
}

#include <stdio.h>

int fatorial (int n);

int main() {
    int n = 5, resultado;
    
    resultado = fatorial(n);
    
    printf("O fatorial de %d e: %d", n, resultado);

    return 0;
}

int fatorial (int n) {
	int resultado; 
	
	if(n <= 0) {
		return 1;
	} else {
		resultado = n * fatorial(n - 1);
		return resultado;
	}
}

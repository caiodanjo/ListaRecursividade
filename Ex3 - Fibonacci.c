#include <stdio.h>

int calculoFibonacci (int n);

int main() {
    int n = 6, resultado;
    
    printf("O resultado e %d", calculoFibonacci(n));

    return 0;
}

int calculoFibonacci (int n) {
	int resultado; 
	
	if(n <= 0) {
		return (0);
	} else if (n == 1) {
		return 1;
	} else {
		return calculoFibonacci(n - 1) + calculoFibonacci(n - 2);
	}
}

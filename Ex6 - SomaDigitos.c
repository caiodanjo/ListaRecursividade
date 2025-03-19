#include <stdio.h>

int somaDigitos (int n);

int main() {
	int n = 1234;
	
	printf("%d ", somaDigitos(n));
	
	return 0;
}

int somaDigitos (int n) {
	if(n <= 0) {
		return (0);
	} else {
		return (n % 10) + somaDigitos(n / 10);
	}
}

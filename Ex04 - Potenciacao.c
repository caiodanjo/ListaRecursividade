#include <stdio.h>

int potenciacao (int x, int n);

int main() {
    int x = 2, n = 5;
    
    printf("A o valor de %d elevado a %d e igual a: %d", x, n, potenciacao(x, n));

    return 0;
}

int potenciacao (int x, int n) {
	if(n <= 0) {
		return 1;
	} else {
		return x * potenciacao(x, n - 1);
	}
}

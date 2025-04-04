#include <stdio.h>

int calculoMDC (int a, int b);

int main() {
    int n1, n2;
    
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	
	printf("O MDC desses números é igual a: %d\n", calculoMDC(n1, n2));
	
	return 0;
}

int calculoMDC (int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return calculoMDC(b, a % b);
    }
}

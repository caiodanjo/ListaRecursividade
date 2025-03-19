#include <stdio.h>

int contagemRegressiva (int n);

int main() {
    int n = 3, contagem;
    
    contagem = contagemRegressiva(n);

    return 0;
}

int contagemRegressiva (int n) {
	if(n < 0) {
		return (0);
	} else {
		printf("%d ", n);
		contagemRegressiva(n - 1);
	}
}

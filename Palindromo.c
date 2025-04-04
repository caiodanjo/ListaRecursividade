#include <stdio.h>
#include <string.h>

int palindromo (char string[10], int comeco, int final);

int main() {
	char string[10];
	int tamanho;
	
	printf("Digite uma palavra: ");
	scanf("%s", string);
	
	tamanho = strlen(string);

    if (palindromo(string, 0, tamanho - 1)) {
        printf("Essa palavra é um palíndromo.\n");
    } else {
        printf("Essa palavra não é palíndromo.\n");
    }
	
	return 0;
}

int palindromo (char string[10], int comeco, int final) {
    if(comeco >= final) {
        return 1;
    } else if(string[comeco] != string[final]) {
        return 0;
    }
    
    return palindromo(string, comeco + 1, final - 1);
}

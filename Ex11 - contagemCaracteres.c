#include <stdio.h>
#include <string.h>

int contagemCaracteres(char *string, char c);

int main() {
    char string[15], c;
    
    printf("Digite uma palavra: ");
    scanf("%s", string);
    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    printf("O caractere '%c' aparece %d vezes na palavra %s.", c, contagemCaracteres(string, c), string);

    return 0;
}

int contagemCaracteres(char *string, char c) {
    int contador = 0;
    
    if(*string == '\0') {
            return 0;
    } else if(*string == c) {
        return 1 + contagemCaracteres(string + 1, c);
    } else {
        return contagemCaracteres(string + 1, c);
    }
}

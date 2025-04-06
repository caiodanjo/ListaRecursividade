#include <stdio.h>

int comprimentoString(char *string);

int main() {
    char string[20];

    printf("Digite uma palavra: ");
    scanf("%s", string);

    printf("A palavra %s possui %d caracteres.", string, comprimentoString(string));

    return 0;
}

int comprimentoString(char *string) {
    if(*string == '\0') {
            return 0;
    } else {
        return 1 + comprimentoString(string + 1);
    }
}

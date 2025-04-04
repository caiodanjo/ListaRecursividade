#include <stdio.h>
#include <string.h>

int inversaoString (char string[10], int comeco, int final);

int main() {
	char string[10] = "recursao";
	
	inversaoString(string, 0, strlen(string) - 1);
	
	printf("%s ", string);
	
	return 0;
}

int inversaoString (char string[10], int comeco, int final) {
	if(comeco >= final) {
		return (0);
	} 
	
	char caractere = string[comeco];
	string[comeco] = string[final];
    string[final] = caractere;
	    
    inversaoString(string, comeco + 1, final - 1);
}

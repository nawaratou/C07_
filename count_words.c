#include <stdio.h>

int main() {
    char str[200];
    int i = 0, inWord = 0, count = 0;

    // Lire toute la ligne
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        i++;
    }

    printf("Nombre de mots : %d\n", count);
    return 0;
}
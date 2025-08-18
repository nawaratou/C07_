#include <stdio.h>

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    // Copier str1 dans result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copier str2 à la suite sans espace
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    result[i] = '\0';

    printf("Chaîne concaténée : %s\n", result);
    return 0;
}
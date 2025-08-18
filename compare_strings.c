#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, identiques = 1;

    scanf(" %[^\n]", str1);
    scanf(" %[^\n]", str2);

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            identiques = 0;
            break;
        }
        i++;
    }

    if (identiques) {
        printf("Les chaînes sont identiques.\n");
    } else {
        printf("Les chaînes sont différentes.\n");
    }

    return 0;
}
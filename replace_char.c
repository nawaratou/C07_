#include <stdio.h>

int main(void) {
    char str[100];
    char oldChar, newChar;
    int i = 0;

    
    fgets(str, sizeof(str), stdin);

   
    scanf(" %c", &oldChar);  // espace avant %c pour ignorer les retours à la ligne

   
    scanf(" %c", &newChar);

    while (str[i] != '\0') {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
        i++;
    }

    printf( " %s", str);

    return 0;
}

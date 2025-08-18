// replace_char.c
#include <stdio.h>
#include <string.h>

int main() {
    char line[300];
    char str[200];
    char ch1, ch2;

    // Lire la ligne entière : chaîne + deux caractères
    fgets(line, sizeof(line), stdin);

    
    // On suppose format : chaîne (sans espace) + ' ' + char + ' ' + char
    sscanf(line, "%s %c %c", str, &ch1, &ch2);

    // Remplacer dans la chaîne
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
        }
    }

    printf("Résultat : %s\n", str);
    return 0;
}
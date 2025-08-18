#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Fonction qui vérifie si une chaîne est un palindrome
bool is_palindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;  // si un caractère ne correspond pas, ce n'est pas un palindrome
        }
        left++;
        right--;
    }
    return true;  // si la boucle se termine, c'est un palindrome
}

int main(void) {
    char mot[100];  // tableau pour stocker le mot saisi

  
    scanf("%99s", mot);  // %99s empêche de dépasser la taille de 100 caractères

    if (is_palindrome(mot)) {
        printf("%s est un palindrome.\n", mot);
    } else {
        printf("%s n'est pas un palindrome.\n", mot);
    }

    return 0;  // indique que le programme s'est bien terminé
}

#include <stdio.h>
#include <string.h>

void rechercher_remplacer(char source[], const char cible[], const char remplacement[]) {
    int line = strlen(source);
    int lenC = strlen(cible);
    int lenR = strlen(remplacement);

    for (int i = 0; i <= line - lenC;) {
        if (strncmp(&source[i], cible, lenC) == 0) {
            memmove(&source[i + lenR], &source[i + lenC], strlen(&source[i + lenC]) + 1);
            memcpy(&source[i], remplacement, lenR);
            i += lenR;
        } else {
            i++;
        }
    }
}

int main() {
    char ch[50], ch1[50], ch2[50];
    printf("Entrer une chaine : ");
    fgets(ch, 50, stdin);
    ch[strcspn(ch, "\n")] = '\0';
    printf("Entrer le mot que tu veux changer : ");
    fgets(ch1, 50, stdin);
    ch1[strcspn(ch1, "\n")] = '\0'; 
    printf("Entrer le nouveau mot : ");
    fgets(ch2, 50, stdin);
    ch2[strcspn(ch2, "\n")] = '\0';

    rechercher_remplacer(ch, ch1, ch2);
    printf("Apres remplacement: %s\n", ch);
    return 0;
}
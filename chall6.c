#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    char cha;
    int n = 0 , i;
    printf("Entrer un chaine : ");
    fgets(ch ,  50, stdin);
    ch[strcspn(ch , "\n")] = '\0' ;
    printf("Entrer la lettre que tu veux chercher : ");
    scanf("%c" , &cha);
    getchar();
    for (i = 0 ; i < strlen(ch) ; i++) {
        if (ch[i] == cha) {
            n++;
        }
    }
    printf("%d" , n);
    return 0;
}
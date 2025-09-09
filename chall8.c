#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char ch[50];
    int  i;
    printf("Entrer un chaine : ");
    fgets(ch ,  50, stdin);
    ch[strcspn(ch , "\n")] = '\0' ;
    for (i = 0 ; ch[i] != '\0' ; i++) {
        ch[i] = tolower(ch[i]);
    }
    printf("%s" , ch);
    return 0;
}
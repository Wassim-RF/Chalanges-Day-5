#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    int i = 0 , n = 0;
    printf("Entrer un chaine : ");
    fgets(ch ,  50, stdin);
    ch[strcspn(ch , "\n")] = '\0' ;
    while (ch[i] != '\0') {
        if (ch[i] != ' ') {
            ch[n] = ch[i];
            n++;
        }
        i++;
    }
    ch[n] = '\0';
    printf("%s" , ch);
    return 0;
}
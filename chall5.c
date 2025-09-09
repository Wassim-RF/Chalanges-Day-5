#include <stdio.h>
#include <string.h>

int main() {
    char ch[50];
    char inv;
    printf("Entrer un chaine : ");
    fgets(ch ,  50, stdin);
    ch[strcspn(ch , "\n")] = '\0' ;
    int f = strlen(ch) - 1;
    int d = 0;

    while(d < f) {
        inv = ch[d];
        ch[d] = ch[f];
        ch[f] = inv;

        d++;
        f--;
    }
    printf("%s" , ch);
    return 0;
}
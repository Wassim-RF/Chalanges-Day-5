#include <stdio.h>
#include <string.h>

int main() {
    char ch[32];
    int c = 0;
    int i = 0;
    printf("Entrer un chaine : ");
    fgets(ch , 32 , stdin);
    ch[strcspn(ch , "\n")] = '\0' ;
    while (ch[i] != '\0') {
        c++;
        i++;
    }
    printf("%d" , c);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char ch[32];

    printf("Entrer un chaine : ");
    fgets(ch , 32 , stdin);
    printf("Votre chaine est : %s" , ch);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50] , ch2[50];
    int cmp;
    printf("Entrer un chaine : ");
    fgets(ch1 ,  50, stdin);
    ch1[strcspn(ch1 , "\n")] = '\0' ;
    printf("Entrer un deuxieme chaine : ");
    fgets(ch2 ,  50, stdin);
    ch2[strcspn(ch2 , "\n")] = '\0' ;
    cmp = strcmp(ch1 , ch2);
    if (cmp == 0) {
        printf("C'est chaine sont les meme");
    } else {
        printf("Sont deferent");
    }
    return 0;
}
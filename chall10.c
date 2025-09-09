#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50] , ch2[50];
    char *n;
    printf("Entrer un chaine : ");
    fgets(ch1 ,  50, stdin);
    ch1[strcspn(ch1 , "\n")] = '\0' ;
    printf("Entrer un sous chaine : ");
    fgets(ch2 ,  50, stdin);
    ch2[strcspn(ch2 , "\n")] = '\0' ;
    n = strstr(ch1 , ch2);
    if (n != NULL) {
        printf("This chaine est existe dans la premiere chaine.");
    } else {
        printf("This chaine n'est pas existe.");
    }
    return 0;
}
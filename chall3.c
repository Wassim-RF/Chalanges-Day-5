#include <stdio.h>
#include <string.h>

int main() {
    char ch1[50] , ch2[50];
    char ch[100];
    printf("Entrer un chaine : ");
    fgets(ch1 ,  50, stdin);
    ch1[strcspn(ch1 , "\n")] = '\0' ;
    printf("Entrer un deuxieme chaine : ");
    fgets(ch2 ,  50, stdin);
    ch2[strcspn(ch2 , "\n")] = '\0' ;
    strcat(ch , ch1);
    strcat(ch , ch2);
    printf("%s" , ch);
    return 0;
}
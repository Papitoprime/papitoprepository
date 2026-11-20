#include <stdio.h>

int main(void) {
    int number;
    int somme;
    int i;
    
    number = 11; 
    somme = 0;
    i = 1;
    
    while (i <= number) {
        somme = somme + i;
        i = i + 1;
    }
    
    printf("%d\n", somme);
    
    return 0;
}
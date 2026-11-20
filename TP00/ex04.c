#include <stdio.h>

int main(void) {
    int T;
    int heures, minutes, secondes;
    
    T = 903217;
    
    heures = T / 3600;
    minutes = (T % 3600) / 60;
    secondes = T % 60;
    
    printf("%d\n", heures);
    printf("%d\n", minutes);
    printf("%d\n", secondes);
    
    return 0;
}
#include <stdio.h>

int main(void) {
    int i;
    
    i = 42;
    while (i <= 1337) {
        printf("%d", i);
        if (i < 1337) {
            printf("1234 "); 
        }
        i = i + 2; 
    }
    printf("\n");
    
    return 0;
}
#include <stdio.h>
#include <math.h>

int main(void) {
    int a = 1;
    int b = -3;
    int c = 2;
    
    double delta;
    
    delta = (b * b) - (4 * a * c);
    
    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (2.0 * a);
        double x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("Delta = %.0f\n", delta);
        printf("Il existe 2 solutions\n");
        printf("x1=%.2f\n", x1);
        printf("x2=%.2f\n", x2);
    } else if (delta == 0) {
        double x = -b / (2.0 * a);
        printf("Delta = 0\n");
        printf("Il existe 1 solution\n");
        printf("x=%.2f\n", x);
    } else {
        printf("Delta = %.0f\n", delta);
        printf("Il n'existe aucune solution\n");
    }
    
    return 0;
}
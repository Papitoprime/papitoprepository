#include <unistd.h>

int main(void) {
    int number;
    int i;
    
    number = 3;
    i = 0;
    
    while (i < number) {
        write(1, "sdq mon gars\n", 13);
        i = i + 1;
    }
    
    return 0;
}
#include <stdio.h>

int main() {
    int i, j, Prime;

    printf("Prime numbers between 2 and 500:\n");

    i = 2;  // Start from 2, as 1 is not prime

    while (i <= 500) {
        Prime = 1;  // Assume prime initially

        //  check divisibility up to the square root of i
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0;  // Not prime if divisible by j
                break;
            }
        }

        if (Prime) {
            printf("%d ", i);
        }

        i++;
    }

    printf("\n");

    
}
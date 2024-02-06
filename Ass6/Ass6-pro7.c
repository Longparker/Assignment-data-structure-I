#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a positive integer greater than 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Invalid input. Please enter a number greater than 1.\n");
    } else {
        i = n;
        while (i >= 1) {
            sum += i * i * i;
            i--;
        }

        printf("The sum of cube numbers from %d to 1 is: %d\n", n, sum);
    }

    return 0;
}

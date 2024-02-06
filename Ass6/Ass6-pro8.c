#include <stdio.h>

int main() {
    int i = 1, num, max;

   printf("plz!! Input 20 numbers\n");
    while (i < 20) {  
        printf("Enter numbers:");
        scanf("%d", &num);

        if (num > max) {
            max = num;  
        }

        i++;
    }

    printf("The maximum number is: %d\n", max);

    return 0;
}


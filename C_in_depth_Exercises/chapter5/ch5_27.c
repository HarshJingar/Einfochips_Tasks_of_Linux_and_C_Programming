#include <stdio.h>

int main() {
    int i, num, max;

    printf("Enter number 1: ");
    scanf("%d", &max);

    for(i = 2; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max)
            max = num;
    }

    printf("Largest number = %d", max);
    return 0;
}


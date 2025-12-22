#include <stdio.h>

int main() {
    int num, digit, count = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter digit: ");
    scanf("%d", &digit);

    while(num != 0) {
        if(num % 10 == digit)
            count++;
        num /= 10;
    }

    printf("Digit occurs %d times", count);
    return 0;
}


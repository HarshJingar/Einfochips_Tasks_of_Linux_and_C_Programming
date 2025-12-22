#include <stdio.h>

int main() {
    int num, a = 0, b = 1, c;

    printf("Enter number: ");
    scanf("%d", &num);

    if(num == 0 || num == 1) {
        printf("Fibonacci number");
        return 0;
    }

    c = a + b;
    while(c < num) {
        a = b;
        b = c;
        c = a + b;
    }

    if(c == num)
        printf("Fibonacci number");
    else
        printf("Not a Fibonacci number");

    return 0;
}


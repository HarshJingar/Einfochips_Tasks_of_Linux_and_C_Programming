#include <stdio.h>

int main() {
    int x, n, i;
    long term = 1, sum = 0;

    printf("Enter value of x and n: ");
    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++) {
        term *= x;
        if(i % 2 == 0)
            sum -= term;
        else
            sum += term;
    }

    printf("Sum of series = %ld", sum);
    return 0;
}


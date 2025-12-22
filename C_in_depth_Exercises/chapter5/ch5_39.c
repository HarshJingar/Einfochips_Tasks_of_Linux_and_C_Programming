#include <stdio.h>

int main() {
    int n, i;
    long term = 0, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        term = term * 10 + 1;
        sum += term;
    }

    printf("Sum of series = %ld", sum);
    return 0;
}


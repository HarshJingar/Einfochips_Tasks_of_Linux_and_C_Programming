#include <stdio.h>

int main() {
    int x, y, i, result = 1;

    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    for(i = 1; i <= y; i++)
        result *= x;

    printf("Result = %d", result);
    return 0;
}


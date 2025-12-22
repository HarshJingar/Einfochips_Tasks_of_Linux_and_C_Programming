#include <stdio.h>

int main() {
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 3 != 0)
            continue;
        printf("Cube of %d = %d\n", i, i*i*i);
    }
    return 0;
}


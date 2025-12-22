#include <stdio.h>

int main() {
    int i, j, num;

    for(i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        for(j = 1; j <= num; j++)
            printf("=");
        printf("\n");
    }
    return 0;
}


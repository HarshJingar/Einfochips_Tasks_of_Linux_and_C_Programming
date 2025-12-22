#include <stdio.h>

int main() {
    int num, temp, rev;

    for(num = 1000; num <= 9999; num++) {
        temp = num;
        rev = 0;

        while(temp != 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if(num == rev)
            printf("%d ", num);
    }
    return 0;
}


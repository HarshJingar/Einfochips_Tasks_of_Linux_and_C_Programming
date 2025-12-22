#include <stdio.h>

int main() {
    int num, temp, rev = 0;

    printf("Enter number: ");
    scanf("%d", &num);

    temp = num;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if(num == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome");

    return 0;
}


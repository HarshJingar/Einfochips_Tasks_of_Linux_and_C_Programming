#include <stdio.h>

int main() {
    int roll, i;
    int m1, m2, m3;
    int total;
    int count200 = 0;
    int maxTotal = 0;
    int maxRoll = 0;

    for(i = 1; i <= 10; i++) {
        do {
            printf("\nEnter roll number of student %d: ", i);
            scanf("%d", &roll);
        } while(roll < 1000 || roll > 9999);

        printf("Enter marks in 3 subjects: ");
        scanf("%d %d %d", &m1, &m2, &m3);

        if(m1 >= 40 && m2 >= 40 && m3 >= 40) {
            total = m1 + m2 + m3;
            if(total > 200)
                count200++;
            if(total > maxTotal) {
                maxTotal = total;
                maxRoll = roll;
            }
        }
    }
    printf("\nNumber of students with total > 200 = %d", count200);
    printf("\nRoll number with highest total = %d", maxRoll);

    return 0;
}


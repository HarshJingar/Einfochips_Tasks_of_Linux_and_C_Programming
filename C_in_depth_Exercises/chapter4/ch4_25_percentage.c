#include <stdio.h>

int main(){
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter the marks of 5 Subjects out of 100: ");
	scanf("%d %d %d %d %d" ,&sub1,&sub2,&sub3,&sub4,&sub5);
	int sum = sub1 + sub2 + sub3 + sub4 + sub5;
	float percentage = (sum/500.0)*100;
	printf("Percentage is: %.2f\n" ,percentage);
	return 0;
}

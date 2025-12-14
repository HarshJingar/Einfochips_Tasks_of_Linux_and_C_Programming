#include <stdio.h>

void main(){
	int num, rem, rev_num=0;
	printf("Enter the Number: ");
	scanf("%d" ,&num);

	while(num!=0){
		rem = num % 10;
		num /= 10;
		rev_num = ((rev_num * 10) + rem);
	}
	printf("The Reverse of a Number is: %d\n" ,rev_num);
}

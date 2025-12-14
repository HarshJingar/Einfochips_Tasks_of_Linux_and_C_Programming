#include <stdio.h>

void main(){
	int num, rem, rev_num=0, temp;
	printf("Enter the Number: ");
	scanf("%d" ,&num);
	temp = num;
	while(num!=0){
		rem = num%10;
		num /= 10;
		rev_num = (rev_num * 10) + rem;
	}
	if(rev_num == temp){
		printf("Number is Palindrome\n");
	}
	else{
		printf("Number is not Palindrome\n");
	}
}

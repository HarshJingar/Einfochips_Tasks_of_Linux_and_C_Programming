#include <stdio.h>

void main(){
	int num1,num2;
	printf("Enter the two Numbers: ");
	scanf("%d %d" ,&num1 ,&num2);

	while(num1 > 0 && num2 > 0){
		if(num1>num2){
			num1 = num1 % num2;
		}else{
			num2 = num2 % num1;
		}
	}
	if(num1 == 0){
		printf("GCD is: %d\n" ,num2);
	}else{
		printf("GCD is: %d\n" ,num1);
	}
}

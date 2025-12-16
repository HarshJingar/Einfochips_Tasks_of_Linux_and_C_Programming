#include <stdio.h>

int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d" ,&a,&b);
	int result = (a>b) ? (a+b) : (b-a);
	if(a>b){
		printf("Sum is: %d\n" ,result);
	}else{
		printf("Difference is: %d\n" ,result);
	}
	return 0;
}

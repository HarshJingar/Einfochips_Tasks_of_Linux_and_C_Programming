#include <stdio.h>

void main(){
	int num;
	printf("Enter the number: ");
	scanf("%d" ,&num);
	int arr[num-1];
	for(int i=0; i<num-1; i++){
		printf("arr[%d]: " ,i);
		scanf("%d" ,&arr[i]);
	}
	for(int i=0; i<num; i++){
		if(arr[i] != i+1){
			printf("The missing number is: %d\n" ,i+1);
			break;
		}
	}
}

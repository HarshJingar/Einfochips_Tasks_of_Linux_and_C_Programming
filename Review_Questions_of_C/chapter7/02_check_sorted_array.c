#include <stdio.h>

void main(){
	int arr[] = {1,2,3,7,4};
	short int isSorted = 1;
	for(int i=0; i < (sizeof(arr)/sizeof(arr[0])-1); i++){
		if(arr[i]>arr[i+1]){
			isSorted = 0;
			break;
		}
	}
	if(isSorted){
		printf("Array is Sorted!\n");
	}
	else{
		printf("Array is not Sorted!\n");
	}
}

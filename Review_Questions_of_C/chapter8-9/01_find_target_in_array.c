#include <stdio.h>

int main(){
	int arr[] = {3,4,6,7,9,12,16,17};
	int n = 8;
	int target = 9;
	int isTarget = 0;

	for(int i=0; i<n; i++){
		if(arr[i] == target){
			isTarget = 1;
			break;
		}
	}
	if(isTarget){
		printf("Element %d is present in array\n" ,target);
	}else{
		printf("Element %d is not present in array\n" ,target);
	}
	return 0;
}

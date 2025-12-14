#include <stdio.h>

void main(){
	int arr[] = {8,10,5,7,9,2,6};
	int max = 0;
	for(int i=0; i<sizeof(arr) / sizeof(arr[0]); i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("Largest Number in a given Array is: %d\n" ,max);
}

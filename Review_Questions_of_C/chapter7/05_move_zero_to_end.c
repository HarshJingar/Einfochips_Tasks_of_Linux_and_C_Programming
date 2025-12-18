#include <stdio.h>

int main(){
	int arr[] = {1,0,5,4,0,8,0,0,9,8};
	int n = 10;
	int j = 0;

	for(int  i=0; i<n; i++){
		if(arr[i] != 0){
			arr[j++] = arr[i];
		}
	}
	while(j<n){
		arr[j++] = 0;
	}
	for(int i=0; i<n; i++){
		printf("%d " ,arr[i]);
	}
	return 0;
}

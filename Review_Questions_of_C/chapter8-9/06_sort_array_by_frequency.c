#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "harrsh";
	int freq[256] = {0};
	char arr[256];
	int cnt = 0;

	for(int i=0; str[i]; i++){
		if(freq[str[i]] == 0)
			arr[cnt++] = str[i];
		freq[str[i]]++;
	}
	for(int i=0; i<cnt-1; i++){
		for(int j=i+1; j<cnt; j++){
			if(freq[arr[i]] < freq[arr[j]] || (freq[arr[i]] == freq[arr[j]] && arr[i] > arr[j])){
				char temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i=0; i<cnt; i++)
		printf("%c" ,arr[i]);
	return 0;
}

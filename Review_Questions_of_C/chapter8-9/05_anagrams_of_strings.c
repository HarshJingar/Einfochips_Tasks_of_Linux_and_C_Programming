#include <stdio.h>
#include <string.h>

int main(){
	char str1[] = "BAT";
	char str2[] = "ATB";
	int cnt[26] = {0};

	if(strlen(str1) != strlen(str2)){
		printf("False\n");
		return 0;
	}
	for(int i=0; str1[i]; i++){
		cnt[str1[i] - 'A']++;
		cnt[str2[i] - 'A']--;
	}
	for(int i=0; i<26; i++){
		if(cnt[i] != 0){
			printf("False\n");
			return 0;
		}
	}
	printf("True\n");
	return 0;
}

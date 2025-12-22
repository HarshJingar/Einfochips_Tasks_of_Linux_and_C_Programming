#include <stdio.h>
#include <string.h>

int main(){
	char s[] = "harsh";
	char t[] = "mohim";
	int mapofS[256] = {0};
	int mapofT[256] = {0};

	for(int i=0; i<strlen(s); i++){
		if(mapofS[s[i]] != mapofT[t[i]]){
			printf("False\n");
			return 0;
		}
		mapofS[s[i]] = i+1;
		mapofT[t[i]] = i+1;
	}
	printf("True\n");
	return 0;
}

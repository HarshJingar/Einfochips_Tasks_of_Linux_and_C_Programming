#include <stdio.h>
#include <limits.h>

int myAtoi(char *s){
	int i=0, sign=1;
	long result = 0;

	//skip, whitespace removal
	while(s[i] == ' ')
		i++;

	// handle sign
	if(s[i] == '-' || s[i] == '+'){
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	//convert digits
	while(s[i] >= '0' && s[i] <= '9'){
		result = result * 10 + (s[i] - '0');

		//handle overflow
		if(result > INT_MAX)
			return sign == 1 ? INT_MAX :  INT_MIN;
		i++;
	}
	return (int)(result*sign);
}
int main(){
	char s[] = "156224cdo";
	printf("%d" ,myAtoi(s));
	return 0 ;
}

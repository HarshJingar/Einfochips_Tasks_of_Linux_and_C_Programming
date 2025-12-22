#include <stdio.h>

int main(){
	int a=6, b=4;
	while(a+b){
		printf("a=%d, b=%d\n" ,a,b);
		a/=2;
		b%=3;
	}
	return 0;
}
//Output:
//a=6, b=4
//a=3, b=1
//a=1, b=1
//a=0, b=1
//... infinite loop

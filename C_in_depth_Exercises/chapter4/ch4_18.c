#include <stdio.h>

int main(){
	int a=10;
	a=a++;
	a = a++ * a--;
	printf("%d\n" ,a);
	printf("%d\n" ,a++ * a++);
	return 0;
}
//Output: Output is undefined as different compiler produces different output
//132 (let a=11)
//17556 (let a=132)

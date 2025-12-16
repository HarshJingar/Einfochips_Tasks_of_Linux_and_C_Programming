#include <stdio.h>

int main(){
	int a=5, b=5;
	printf("%d, %d\t" ,++a,b--);
	printf("%d, %d\t" ,a,b);
	printf("%d, %d\t" ,++a,b++);
	printf("%d, %d\n" ,a,b);
	return 0;
}
//Output: 6, 5	6, 4	7, 4	7, 5

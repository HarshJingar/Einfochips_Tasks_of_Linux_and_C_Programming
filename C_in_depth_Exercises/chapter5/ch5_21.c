#include <stdio.h>

int main(){
	int i=10;
	do{
		printf("i=%d\t",i);
		i=i-3;
	}while(i);
	return 0;
}
//Ouput: i=10	i=7	i=4	i=1	i=-2 ... infinite loop

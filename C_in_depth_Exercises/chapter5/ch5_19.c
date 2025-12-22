#include <stdio.h>

int main(){
	int i=1;
	while(i++ < 5)
		printf("%d " ,i);
	printf("\n");
	i=1;
	while(++i < 5)
		printf("%d ",i);
	printf("\n");
	i=6;
	while(i--)
		printf("%d ",i);
	return 0;
}
//Output:
//2 3 4 5
//2 3 4 
//5 4 3 2 1 0 

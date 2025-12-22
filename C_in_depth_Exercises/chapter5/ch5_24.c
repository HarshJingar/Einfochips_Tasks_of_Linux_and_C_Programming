#include <stdio.h>

int main(){
	int i=1,sum1=0,sum2=0;
	for(i=1; i<5; i++)
		sum1+=i;
	i=1;
	while(i<5){
		i++;
		sum2+=i;
	}
	printf("%d %d\n" ,sum1,sum2);
	return 0;
}
//Output: 10 14

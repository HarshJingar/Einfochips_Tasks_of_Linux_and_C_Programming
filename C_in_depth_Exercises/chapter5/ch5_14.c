#include <stdio.h>

int main(){
	int k=10;
	switch(k){
		case '5':
		case '10':
			k++;
			continue;
		case '15':
		case '20':
			k--;
	}
	return 0;
}
//Output: Error, continue can't use in switch

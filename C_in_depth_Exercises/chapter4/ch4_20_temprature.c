#include <stdio.h>

int main(){
	float temp;
	printf("Enter the Temprature in Celsius: ");
	scanf("%f" ,&temp);
	float temp_fah = (9.0/5.0)*temp + 32;
	printf("Temprature in Fahrenheit is: %.2f\n" ,temp_fah);
	return 0;
}

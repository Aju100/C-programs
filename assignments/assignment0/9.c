/*
write a program to conver fahrenheit to celsius
*/
#include <stdio.h>
int main(){
	float c,f;
	printf("Enter fahrenheit:\n");
	scanf("%f",&f);
	c = (f-32)*5/9;
	printf("%.2fFahrenheit equals to  %.2fCelsius",f,c);
	return 0;
}

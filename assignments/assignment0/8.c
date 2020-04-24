/*
program to find x^y where x & y is a number given by a user
*/
#include <stdio.h>
#include <math.h>
int main(){
	int x,y,o;
	printf("Enter number :\n");
	scanf("%d",&x);
	printf("Enter number for power:\n");
	scanf("%d",&y);
	o = pow(x,y);
	printf("Result is %d",o);
	return 0;
}

/*
Write a program to calculate the surface of sphere
*/

#include <stdio.h>
#define PI 3.14
int main(){
	float area;
	int r;
	printf("Enter radius:\n");
	scanf("%d",&r);
	area = 4*PI*r*r;
	printf("Surface area of sphere is %.2f",area);
	return 0;
}

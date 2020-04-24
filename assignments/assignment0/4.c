/*
Write a program to calculate area of circle
*/

#include <stdio.h>
#define PI 3.14
int main(){
	float area,radius;
	printf("Enter the radius of circle\n");
	scanf("%f",&radius);
	area = PI*radius*radius;
	printf("\nArea of circle is %.2f",area);
	return 0;
}

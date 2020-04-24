/*
program to find quadratic equation
*/
#include <stdio.h>
#include <math.h>
int main(){
	double a,b,c,discriminant,root0,root1,real,imag;
	printf("Enter coefficients a,b and c:");
	scanf("%lf %lf %lf",&a,&b,&c);

	discriminant = b*b -4*a*c;
	if(discriminant>0){
	root0 = (-b+sqrt(discriminant))/(2*a);
	root1 = (-b-sqrt(discriminant))/(2*a);
	printf("root0 - %.2lf and root1 = %.2lf",root0,root1);
} else if(discriminant == 0){
	root0 = root1 = -b/(2*a);
	printf("root0 = root1 = %.2lf",root0);
}else{
	real = -b/(2*a);
	imag = sqrt(-discriminant(/(2*a);
	printf("root0 = %.2lf+%.2lfi and root1= %.2f-%.2fi",real,imag,real,imag);
}
	return 0;
}

/*
Program to take marks of 5 different subjects and calculate total
and total percentage obtained by student
*/

#include <stdio.h>
int main(){
	float c,math,physic,dl,it,total,percent;
	printf("Enter marks of C, Math , Physics , Digital Logic and IT\n");
	scanf("%f%f%f%f%f",&c,&math,&physic,&dl,&it);
	total = c+math+physic+dl+it;
	percent = (total*100)/500;
	printf("Percentile is %.2f & Total marks is %.2f",percent,total);
	return 0;
}

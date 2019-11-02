#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,spc,rows;
	
	printf("Enter the no. of rows to print: \n");
	scanf(" %d", &rows);
	spc=rows;
	
	for(a=1;a<=rows;a++)
	{
		for(b=1;b<spc;b++)
		{
			printf(" ");
		}
		spc--;
		for(c=1;c<=a;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	getch();	
}

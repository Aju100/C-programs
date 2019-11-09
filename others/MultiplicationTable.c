#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,j;
	printf("enter the number\n");
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
    	for(i=1;i<=10;i++)
		{
			printf("%dx%d=%d\n",j,i,j*i);
		}
		printf("\n");
    }
	getch();
}

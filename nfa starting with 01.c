#include<stdio.h>
#include<string.h>

int main()
{
	enum states {q0,q1,q2,qf};
	char input[10];
	enum states curr_state = q0;
	int i = 0;
	int flag = 0;
	
	printf("Enter a cell number ");
	getw(input);
	char ch= input[i];
	while (ch != '\0')
	{
		switch(curr_state)
		{
			case q0:
			if(ch=='9')
			curr_state=q1;
			else
			flag =1;
			break;
			
			case q1:
				if(ch=='8'||'7'||'6')
				curr_state=q2;
				else
				flag=1;
				break;
				
			case q2:
				if(ch=='0'||'1'||'2'||'3'||'4'||'5'||'6'||'7'||'8'||'9')
				curr_state=qf;
				else
				flag=1;
				break;
				
			case qf:
				if (ch=='0')
				curr_state=qf;
				else
				curr_state=qf;
				break;
		}
		if(flag)
		break;
		ch=input[++i];
	}
		if (curr_state==qf)
		printf("accepted");

		else
		printf("Not accepted");

	return 0;
}

#include<stdio.h>
int main()
{
	float a,b,sum,sub,mul,div;
	int c=1,d;
	printf("enter 1st number:\n");
	scanf("%f",&a);
	printf("enter 2st number:\n");
	scanf("%f",&b);
	while(c)
	{
		printf("choose your operation:\n");
		printf(" 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n");
		scanf("%d",&d);
		switch(d)
		{
			case 1:
				printf("addition of fiven two numbers are:\n");
				sum=a+b;
				printf("%f\n",sum);
				break;
			case 2:
				printf("subtraction of fiven two numbers are:\n");
				sub=a-b;
				printf("%f\n",sub);
				break;
			case 3:
				printf("multiplication of fiven two numbers are:\n");
				mul=a*b;
				printf("%f\n",mul);
				break;
			case 4:
				printf("division of fiven two numbers are:\n");
				div=a/b;
				printf("%f\n",div);
				break;
			default:
				printf("choose the correct choice:\n");
		}
		printf("do you want to continue then enter 1 otherwise o:\n");
		scanf("%d",&c);
	}
	return 0;
}

#include <stdio.h>
int main()
{
int a=1,c;
long unsigned int b=1;
printf("enter the number for which you want to find the factorial: ");
scanf("%d",&a);
c=a;
while (a>=1)
	{
		b=b*a;
		a=a-1;
	}
if (c==0)
{
	b=1;
}
if(c<0)
{printf("factorial is not possible for negative numbers\n");}
if(c>=0)
printf("factorial of %d = %lu\n",c,b);
}


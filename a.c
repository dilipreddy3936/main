#include <stdio.h>
int main()
{
	float h,w;
	int a;
	printf("enter your weight in kg: ");
	scanf("%f",&w);
		printf("\nwhat is the unit of height you want to use\n1.metre\n2.centimetre\n3.inches\n\n(if you don't choose from above options then the default will taken as metre)\n\nyour chosen unit:");
	scanf("%d",&a);
	printf("\nenter your height:");
	scanf("%f",&h);

	if (a==1)
	h=h;
		else {
			if (a==2)
			h= (h/100) ;
			else {
	   		        if (a==3)
				h=h*0.0254 ;
				else {
		                      a=1;
		                      printf("you have not chosen the correct option so your unit is taken as metre");
		                      }}}
			
	printf("\nyour bmi is: %.2f \n",w/(h*h));
	return 0;
}


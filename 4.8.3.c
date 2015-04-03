#include<stdio.h>
int main()
{
	float f;
	printf("please enter a float\n");
	scanf("%f",&f);
	printf("The input is %4.1f or %10.1e\n",f,f);
	printf("The input is %+6.3f or %10.3E",f,f);
	return 0;	
	
	
	
 } 

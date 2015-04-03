#include<stdio.h>
int main()
{
	char name[20];
		
	printf("Please enter your name:\n");
	     scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("%7s",name);
	return 0;
	
}

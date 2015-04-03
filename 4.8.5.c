#include<stdio.h>
int main()
{
	char name[20],fn[20];
	printf("please enter your name and your firstname\n");
	scanf("%s%s",&name,&fn);
	printf("%s%s\n",name,fn);
	printf("%3d%4d\n",strlen(name),strlen(fn));
	printf("%-3d%-4d",strlen(name),strlen(fn));
	return 0;
	
	
}

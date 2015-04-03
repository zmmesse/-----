#include<stdio.h>
#include<float.h>
int main()
{
float m=1.0/3.0;
double n=1.0/3.0;


printf("%6.4f,%14.12f,%18.16f\n",m,m,m);
printf("%6.4f,%14.12f,%18.16f\n",n,n,n);
printf("FLT_DIG:%d\n",FLT_DIG);
printf("DBL_DIG:%d\n",DBL_DIG);

return 0;

}

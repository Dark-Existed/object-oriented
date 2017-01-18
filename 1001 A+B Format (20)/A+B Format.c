#include <stdio.h>
#include <math.h>
int main(void)
{
	int a,b,c,d,e,f;
	scanf("%d %d",&a,&b);
	c=abs(a+b);
	d=c/1000000;
	e=c/1000%1000;
	f=c%1000;
	if (d==0 && e==0 && (a+b)>=0)
	{
		printf("%d",f);
	}
	if (d==0 && e==0 && (a+b)<0)
	{
		printf("-%d",f);
	}
	if (d==0 && e!=0 && (a+b)>0)
	{
		printf("%d,%03d",e,f);
	}
	if (d==0 && e!=0 && (a+b)<0)
	{
		printf("-%d,%03d",e,f);
	}
	if (d!=0 && (a+b)>0)
	{
		printf("%d,%03d,%03d",d,e,f);	
	}
	if (d!=0 && (a+b)<0)
	{
		printf("-%d,%03d,%03d",d,e,f);	
	}		
	return 0;
}

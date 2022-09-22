/*factorial using function*/
#include<stdio.h>
int fact(int x)
{
	int i,f;
	f=1;
    for(i=1;i<=x;i++)
	    f=f*i;
	return f;
}
int main()
{
	int a,fac;
	printf("enter the factorial to be calculated\n");
	scanf("%d",&a);
	fac=fact(a);
	printf("factorial of the number %d is %d\n",a,fac); 
}

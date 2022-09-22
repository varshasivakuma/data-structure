#include<stdio.h>
int main()
{
int a=1,numbr;
long int fact=1;
printf("s.varsha\n192111043\n ");
printf("Enter a number: ");
scanf("%d",&numbr);
for(a=1;a<=numbr;a++)
fact=fact*a;
printf("Factorial of %d is: %ld",numbr,fact);
return 0;
}

#include <stdio.h>
void main()
{
int array[100], i, num;
printf("s.varsha\n192111043\n ");
printf("Enter the size of an array \n");
scanf("%d", &num);
printf("Enter the elements of the array \n");
for (i = 0; i < num; i++)
{
scanf("%d", &array[i]);
}
printf("Even numbers in the array are:\t ");
for (i = 0; i < num; i++)
{
if (array[i] % 2 == 0)
{
printf("%d \t", array[i]);
}
}
printf("\nOdd numbers in the array are:\t");
for (i = 0; i < num; i++)
{
if (array[i] % 2 != 0)
{
printf("%d \t", array[i]);
}
}
}

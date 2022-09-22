#include<stdio.h>
int main()
{
int arr1[20], arr2[20], i, num;
printf("s.varsha \n192111043\n ");
printf("\nEnter the no of elements in the array :");
scanf("%d", &num);
printf("\nEnter the array elements :");
for (i = 0; i < num; i++) {
scanf("%d", &arr1[i]);
}
for (i = 0; i < num; i++) {
arr2[i] = arr1[i];
}
printf("The copied array is as follows:");
for (i = 0; i < num; i++)
printf("\narr2[%d] = %d", i, arr2[i]);
return (0);
}

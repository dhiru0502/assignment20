#include<stdio.h>

int main()
{
   int a,b;
   printf("Enter the value of a and b: ");
   scanf("%d %d",&a,&b);
   max(&a,&b);
   return 0;
}
void max(int *x, int *y)
{
    if(*x>*y)
        printf("Maximun number between a and b is a= %d",*x);
    else
        printf("Maximun number between a and b is b= %d",*y);
}

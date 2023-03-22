#include<stdio.h>

int main()
{
   int a[10]= {4,6,4,8,2,10,18,20,40,23}, s;
   s= sum(a,10);
   printf("Sum of element= %d",s);
   return 0;
}
int sum(int *x, int size)
{
    int i,s=0;
    for(i=0; i<size; i++)
    {
     s= s+ *(x+i);
    }
   return s;
}

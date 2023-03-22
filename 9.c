#include<stdio.h>

int main()
{
   int a[10]= {4,6,4,8,2,10,18,20,40,23};
   reverse(a,10);
   return 0;
}
void reverse(int *x, int size)
{
    int i;
    for(i=size-1; i>=0; i--)
       printf("%d ",*(x+i));
}

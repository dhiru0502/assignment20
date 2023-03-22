#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("Number are a= %d, b= %d\n",a,b);
    swap(&a,&b);
    printf("Swaped number are a= %d, b= %d",a,b);
    return 0;
}
swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

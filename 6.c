#include<stdio.h>

int main()
{
   char a[10];
   int l;
   printf("Enter a string: ");
   gets(a);
   l=length(a);
   printf("Length of string is %d",l);
   return 0;
}
int length(char *x)
{
    int i;
    for(i=0; *(x+i)!=0; i++);
    return i;
}

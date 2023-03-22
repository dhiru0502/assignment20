#include<stdio.h>

int main()
{
   char a[10];
   printf("Enter a string: ");
   gets(a);
   reverse(a);
   return 0;
}
void reverse(char *x)
{
    int i,j;
    for(i=0; *(x+i); i++);

    for(j=i-1; j>=0; j--)

       printf("%c",*(x+j));
}

#include<stdio.h>

int main()
{
   char a[20];
   printf("Enter a string: ");
   gets(a);
   vowel(a);
   return 0;
}
int vowel(char *x)
{
    int i, vo=0, co=0;
    for(i=0; *(x+i)!=0; i++)
    {
      if(*(x+i)=='a' || *(x+i)=='e' || *(x+i)=='i' || *(x+i)=='o' || *(x+i)=='u' || *(x+i)=='A' || *(x+i)=='E' || *(x+i)=='I' || *(x+i)=='O' || *(x+i)=='U')
        vo++;
      else
        co++;
    }
    printf("Number of vowels = %d\n",vo);
    printf("Number of consonants = %d",co);
}

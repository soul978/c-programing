/*             *
             * * *
           * * * * *
         * * * * * * *
           * * * * *               imortant question
             * * *
               *

*/ //print the diamond start
#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
   int nsp=n/2;
   int nst=1;
   int m=n/2+1;
   for (int i = 1; i <=n; i++)
   {
    for (int j= 1; j <=nsp; j++)
    {
      printf("   ");
    }
    for (int k = 1; k<=nst; k++)
    {
      printf(" * ");
    }
    if (i<m)
    {
      nsp --;
      nst +=2;
    }
    else
    {
      nsp++;
     nst-=2;
    }
    
    printf("\n");
   }
   return 0;
}
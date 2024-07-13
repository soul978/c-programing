/*
 
 *** ***    nst=3 nsp=1
 **   **     nsp+=2   or   nsp=nsp+2
 *     *     nst--;

*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int nsp=1;
    int nst=n;
   // for (int n = 1; n <=2*n+1; n++)
   // {
   //   printf("*");
   // }
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=nst; j++)
        {
            printf("*");//--------------------number of star
        }
        for (int k = 1; k <=nsp; k++)
        {
            printf(" ");//--------------------number of gapes
        }
        for (int m = 1; m <=nst; m++)
        {
            printf("*");//------------------------number of second star
        }
      nst--;
     nsp=nsp+2;//-----------------------------or------------------nsp+=2
        
        printf("\n");
    }
    
    return 0;
}
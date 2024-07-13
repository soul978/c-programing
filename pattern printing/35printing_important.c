/*       1234321
         123 321
         12   21
         1     1
         
----------------------------print the given pattern.
*/
#include<stdio.h>
int main(){
    int n; 
    printf("enter the first number :");
    scanf("%d",&n);
    int nst=n; 
    int nsp=1;
   for (int i = 1; i <=n; i++)
   {
     int a=1;int b=n;
      for (int  j = 1; j <=nst; j++)
      {
          //printf("*");
        printf("%d",a);
        a=a+1;
      }
      for (int k = 1; k <=nsp; k++)
      {
        printf(" ");
          
      }
      for (int m = 1; m <=nst; m++)
      {
          //printf("*");
        printf("%d",b);
        b=b+2-1;   
     
      }  
    nsp+=2;
    nst-=1;
   printf("\n");
   }
   
    return 0;   
}
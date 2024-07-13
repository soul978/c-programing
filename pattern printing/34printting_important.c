/*       1234 6789
         123   789
         12     89
         1       9
         
----------------------------print the given pattern.
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    int nsp=1;  //--------------------------------------------------(1)
    int nst=n;  //--------------------------------------------------(2)
    for (int i = 1; i <=n; i++)
    {  
        int a=1; //--------------------------------------value it van increase the value
        for (int j = 1; j <=nst; j++)
        {
            printf("%d",a);
            a++; //------------------------------------increase the star values
        }
        for (int k = 1; k <=nsp; k++)
        {
            printf(" ");
            a++; //--------------------------------------increase the value of the speace
        }
        for (int l = 1; l<=nst; l++)
        {
            printf("%d",a);
          a=a+2-1;//-----------------------------------------increse the second value of the star 
        }
        
        nst--;  //--------------------------------------------number of star decreament .
        nsp+=2;//------------------------------------------------------------------------- number of spece increament
        printf("\n");//----------------------------line changing
    }
    
    return 0;
}
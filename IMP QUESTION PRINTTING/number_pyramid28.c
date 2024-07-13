/*
         1
        121
       12321
      12343521
     123454321
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)  //its run n terms 
    { int a=i-1;                   // values decreasing --------------------
        for (int j = 1; j <=2*n-i; j++)   //decrease the value n-i
        {
            printf(" ");//gaping------------------------------------
        }
        for (int k= 1; k <=i; k++)
        {
            printf("%d",k);
            
        }
        for (int l = 1; l <=i-1; l++)
        {
            printf("%d",a);
           a--;  //    value decreasing-----------------------------------------
        }
        
        
        printf("\n");
        
    }
    
    return 0;
}

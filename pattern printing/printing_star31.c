//  *****
//   ****
//    ***
//     **
//      *   print the given pattern 
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number ");
    scanf("%d",&n);
    for (int i = 0; i <=n; i++)
    { 
        for (int j = 0; j <=i; j++)
        {
            printf(" ");
            
        }
        for (int k = 1; k <=n-i+1; k++)
        {
            printf("*");
            
        }
        
       printf("\n"); 
    }
        
    return 0;
}
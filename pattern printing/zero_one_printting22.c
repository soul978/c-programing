/*  1
    01   printe the pattern
    101
    0101

*/
#include<stdio.h>
int main(){
    int n; 
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if ((i+j)%2==0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
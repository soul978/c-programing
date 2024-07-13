//enter odd number n=5,n=7

#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            int a=n/2 +1 ;
            if (j==a && j==a)
            {
               printf(" * ");
            }
            else
            {
                printf(" # ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}
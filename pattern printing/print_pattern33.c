//4 4 4 4 4 4 4 
//4 3 3 3 3 3 4
//4 3 2 2 2 3 4 
//4 3 2 1 2 3 4
//4 3 2 2 2 3 4
//4 3 3 3 3 3 4
//4 4 4 4 4 4 4
//print the given pattern
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number");
    scanf("%d",&n);
    int min=0;
    for (int i = 1; i <=2*n-i; i++)
    {
        for (int j = 1; i <=2*n-i; i++)
        {
            int a=1;
            if (i>n)
            {
                a=2*n-i;
            }
            int b=j;
            if (b>n)
            {
                b=2*n-j;
            }
            if (a<b)
            {
                min=a;
            }
            else
            {
                min =b;
            }
            printf("%d",n+i-min);
        }
        printf("\n");
    }
    return 0;
    }
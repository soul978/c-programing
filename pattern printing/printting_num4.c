//1234 print the pattern n=4
//1234
//1234
//1234
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}
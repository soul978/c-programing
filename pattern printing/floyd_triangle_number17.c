//print the given number floyd traingle
/*   1
     23              n=3
     456
     78910 

*/
#include<stdio.h>
int main(){
    int n;
    int a=1;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
}
//print  numer tringle 
//1
//12
//123
//1234
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
      for (int j = 1; j <=i; j++)
      {
        printf("%d",j);
      }
     printf("\n"); 
    }
    
    return 0;
}
//print the given pattern
//1
//AB                most important question try it;
//123
//ABCD
//12345
#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        int a=1;
        for (int j = 1; j <=i; j++)
        { 
           if (i%2==0)
           {
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
            a++;
           }
          else
          {
             printf("%d",j);
          }
        }
        printf("\n");
    }
    
    return 0;
}
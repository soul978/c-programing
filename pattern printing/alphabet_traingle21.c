/*   print the given pattern
         A
        AB
       ABC    important question
      ABCD
*/
#include<stdio.h>
int main(){
    int n; 
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    { 
        int a=1;
        for (int j = 1; j <=n-i; j++)
        {
            printf(" ");
        
         
        }
       for (int k = 1; k <=i; k++)
       {
        
        int b =a+64;
        char ch=(char) b;
         printf("%c",ch);
         a++;
       }
        
       printf("\n"); 
    }
    
    return 0;
}
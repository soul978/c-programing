/*   A
    ABA
   ABCBA
  ABCDCBA
 print the values of the traingle
*/  



#include<stdio.h>
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)  //its run n terms 
    { int a=i-1;    int c=1;               // values decreasing --------------------
        for (int j = 1; j <=2*n-i; j++)   //decrease the value n-i
        {
            printf(" ");//gaping------------------------------------
        }
        for (int k= 1; k <=i; k++)
        {
            int v=c+64;
            char ch=(char)v;
           printf("%c",ch);
           c++;
        }
        for (int l = 1; l <=i-1; l++)
        {
            int z=a+64;          // a help to change the value
            char ch=(char)z;
            printf("%c",ch);
           a--;  //    value decreasing-----------------------------------------
        }
        
        
        printf("\n");
        
    }
    
    return 0;
}

/*  ******
    ******  print the pattern important question
    ******        n=6
    ******
    ******
    ******
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++) //column line 
    {
        for (int j = 1; j <=n; j++)//row line
        {
            printf(" * ");  //for gaping 
        }
        printf("\n");//next line
    }
    
    return 0;
}
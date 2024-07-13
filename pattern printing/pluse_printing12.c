//print the given patter
/*      *
        *
    * * * * *                   iportant question
        *
        *
*/
#include<stdio.h>
int main(){
   // int n;
   // printf("enter the first number :");
   // scanf("%d",&n);
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if (i%3==0 || j%3==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
           printf(" "); 
        }
        printf("\n");
    }
     //printf(" ");
    return 0;
}
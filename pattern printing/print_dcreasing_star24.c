/* print the given number 
     *
     ***
     *****
     *******
     *********
*/
#include<stdio.h>
int main(){
  int n;int a=1;
  printf("enter the first number :");
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  {  
  for (int k = 1; k <=a; k++)
    {
      printf("*");
    }
    a=a+2;
   
  printf("\n");
  }
  return 0;
}
//               1
//              123
//             12345
//            1234567
//           123456789
//
#include<stdio.h>
int main(){
  int n; int a=1; 
  printf("enter the first number :");
  scanf("%d",&n);
  for (int i = 1; i <=n; i++)
  { 
    int b=1;
    for (int j = 1; j <=2*n-i; j++)
    {
      printf(" ");
      
    }
    for (int k = 1; k <=a; k++)
    {
       
        printf("%d",b);
        b++;
    }
      a=a+2;
   
  printf("\n");
  }
  return 0;
}
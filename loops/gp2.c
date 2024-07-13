//display the gp 3,12,48 up to n term 
#include<stdio.h>
int main(){
    int a=3;
    for (int i = 1; i < a*a-1; i++)
    {
      printf("%d  ",a);
      a=a*4;
    }
    
    return 0;
}
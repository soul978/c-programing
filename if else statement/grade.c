//take input percentage of student and print thr grade according to ther marks
#include<stdio.h>
int main(){
    int a;
    printf("enter a number :");
    scanf("%d",&a);
    if (a>=80)
    {
        printf("A grade");
    }
    else if (a>=60)
    {
      printf("B grade");
    }
    else if (a>=40)
    {
        printf("c grade");
    }
    else
    {
      printf("d grade");
    }
    return 0;
    
    
}
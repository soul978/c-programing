//input any year and write a program to determine the year is leape year or not.
// leape year occurs after every 4 year
#include<stdio.h>
int main(){
    int x;
    printf("enter a year :");
    scanf("%d",&x);
    if (x%2==0)
    {
      printf("%d is a leape year",x);
    }
    else
    {
        printf("%d not a leape year",x);
    }
    return 0;
}
//leape year means 2004,2008,2012
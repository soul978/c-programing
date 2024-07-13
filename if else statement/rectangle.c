//given the length and breath of the ractangle 
//write a program to find whether the are of ractangle grater   than its perimeter;
//a=l*b
//b=2(l+b)
#include<stdio.h>
int main()
{
   int l;int b;
   printf("enter the lenght of ractangle :");
   scanf("%d",&l);
   printf("enter the breath of the ractangle :");
   scanf("%d",&b);
   int a = l*b;
   int p = 2*(l+b);//parimeters
   if (a>p)
   {
    printf("area is greater than perimeter");
   }
    if (a<p)
   {
    printf("area is less than perimeter");
   }
   if (a==b)
   {
    printf("area is equal to perimeter");
   }
     return 0;
}//perameter kabhi jada hoge hi nhi
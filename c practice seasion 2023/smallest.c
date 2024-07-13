#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c,d;
    printf("enter the first numbers :");scanf("%d",&a);
    printf("enter the second numbers :");scanf("%d",&b);
    printf("enter the third nubers :");scanf("%d",&c);
    printf("enter the fourth numbers :");scanf("%d",&d);
    if (a<b && a<d)
    {
        printf("%d is smallest numbers ",a);
    }
    else if (b<c && b<d)
    {
        printf("%d is smallest numbers ",b);
    }
    else if (c<d && c<a)
    {
        printf("%d is samllest numbers ",c);
    }
    else
    {
        printf("%d is smallest numbers ",d);
    }
    
    return 0;
}
#include<stdio.h>
int main(){
    int a,b,c,d,e,sum;
    printf("enter the 5 subject marks  ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum = (a+b+c+d+e)*100/500;
    if (sum>=60)
    {
        printf("%d first division",sum);
    }
    else if (sum>=50)
    {
        printf("%d second division ",sum);
    }
    else if (sum>=40)
    {
        printf("%d third divison ",sum);
    }
    else
    {
        printf("%d fail\n",sum);
    }
    
   // printf("%d  ",sum);
    return 0;
}
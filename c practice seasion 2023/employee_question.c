#include<stdio.h>//? bonus given questoin when implay work more than 3 years
int main(){
    int bonus,currentyear,yearofjoint,yos;
    printf("enter current year and year of jointing ");
    scanf("%d %d",&currentyear,&yearofjoint);

    yos=currentyear-yearofjoint;

    if (yos>3)
    {
        bonus = 2500;
        printf("bonus = rs %d\n",bonus);
    }
    else
    {
        printf("not bonus ");
    }
    
    return 0;
}
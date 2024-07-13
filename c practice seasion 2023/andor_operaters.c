#include<stdio.h>
int main(){
    int m1,m2,m3,m4,m5,per;
    printf("enter the all marks of five subjects :");
    scanf("%d %d %d %d %d ",&m1,&m2,&m3,&m4,&m5);
    per =(m1+m2+m3+m4+m5)*100/500;
    if (per>=60)
    {
        printf("first division\n");
    }
    if ((per>=50)&&(per<60))
    {
        printf("second divison\n");
    }
    if ((per>=40)&&(per <50))
    {
        printf("third division\n");
    }
    if (per<40)
    {
        printf("fail\n");
    }
    
    return 0;
}
//calculate the simple intrest 
//si = prt/100 
//p=rinciple
//r=rate
//t=timing
#include<stdio.h>
int main()
{
     float p,r,t,si;
     printf("enter the principle :");
        scanf("%f",&p);
     printf("enter the rate of intrest :");
        scanf("%f",&r);
     printf("enter the time :");
        scanf("%f",&t);
     si=(p*r*t)/100;
     printf("the intrest is :%f",si);
    return 0;
}
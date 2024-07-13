#include<stdio.h>
#include<conio.h>
int main(){
    int qty,dis;
    float rate,total;
    printf("enter the quantity :");
    scanf("%d",&qty);
    printf("entre the rate :");
    scanf("%d",&rate);
    if(qty>=1000){
        dis = 10;
       // printf("on discount 10 on offer of ffestival");
        total = qty-1000;
        printf("result %f",total);
    }
    else if (qty<=1000)
    {
        dis=0;
        total = (qty*rate)-(qty*rate*dis/100);
        printf("total :%f",total);
    }
    else
    {
        printf("\n sorry there i no discount :");

    }
    return 0;
}
//!-----------------------stair path question -------------------------------------------
//?----------------------------kitne step hum lopg waha pahuch jate hai-----------------------
//todo -----------------------------move only 1 ,2 and 3 step not more;------------------------------
#include<stdio.h>
int stair(int n){
   if (n==1) return 1;
   if (n==2) return 2;
   if (n==3) return 3;
   
    int totalways = stair(n-1) + stair(n-2) + stair(n-3);
    return totalways;
    }
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
   // int x = stair(n);
    printf("%d",stair(n));
    return 0;
}
//!page 108
//todo  easy question but its derivation are hard 


//-----------------------stair path question -------------------------------------------
//----------------------------kitne step hum lopg waha pahuch jate hai-----------------------
// -----------------------------move only 1 and 2 step not more;------------------------------
#include<stdio.h>
int stair(int n){
  //  if (n==1) return 1;
  //  if (n==2) return 2;
  //-------or------------------
  //if(n<=2)return n;
  //----------or-----------------
    if (n==1||n==2) return n;
    
    int totalways = stair(n-1) + stair(n-2);
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
//page 108
// easy question but its derivation are hard 


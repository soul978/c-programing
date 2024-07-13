#include<stdio.h>
/*int power(int a,int b){  // intractive methods
    int x = 1;
    for (int i = 1; i < b; i++)
    {
        x = x*a;
    }
    
  return x;
}
   *///recursively solved
  int power(int a,int b) {
    if (b==0) return 1;
    int recAns = a*power(a,b-1);
    return recAns;
  }

int main(){
    int a;
    printf("enter base:");
    scanf("%d",&a);
     int b;
    printf("enter power:");
    scanf("%d",&b);
    int p = power(a,b);
    printf(" %d raised to the power %d is %d",a,b,p);
    return 0;
}//page 106
// jub function return hota hai to wo waha jata hai jaha se call hua rahta hai
// jaha pe fuction call hota hai wahi wo end bhi hota hai;

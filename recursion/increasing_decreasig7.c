// ---------print decreasing and decreasing number n=4   4,3,2,1,1,2,3,4,// 
//-----------important question -----------------
#include<stdio.h>
void decreasing( int n){
    if (n==0) return;
 
    printf("%d\n",n);
    decreasing(n-1);
   if (n==1)
    decreasing(n-1);
    printf("%d\n",n);
   
    return;
}
int main(){
    int n ;
    printf("enter the firsst number :");
    scanf("%d",&n);
    decreasing(n);
    return 0;
}
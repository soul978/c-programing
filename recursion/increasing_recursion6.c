//calling it self it is known has recursion
//calling itself;
//
//question -------------------------------------print n to 1  using recursion---------------------------------
//----------------------------increasing---------------------------------------
     
#include<stdio.h>
void increasing(int n){
    if (n==0) return ;// ye function nahi hota to program infinite  tak chalta   base case
    increasing(n-1);// value to decreses kar raha hai//---------code
    printf("%d\n",n); //-------------------------call----------------
    return;
}
int main(){
    int n;
    printf("enter the first number :");
    scanf("%d",&n);
    increasing(n);//  (n)  number pass  karne ka kaam  karta hai
    return 0;
}
// page 96  and 99;//
///--------------------------------recusion is most imortant topics-----------------------------------------
// call lagane se pahle bhi code likha shakte hai call lagane kea baad bhi code hikhi shaktea hai uska intensition badal jaiyega  
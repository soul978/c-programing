//pointers and how decleard pointers
#include<stdio.h>
int main(){
    int a = 5;
    int* x = &a;// ---or-----(int *x= &a)---------------//  ye address ko store karne ke liye hota hai (int*)isko hi npointer bolte hai
    *x = 7;// a is change  -- (vvip)
    printf("%p\n",&x);// value ka address print kare shakte hain {p} se 
    printf("%p",*x);//-------------*x ka matlab hai ki x address pe jo value hai usko print kar do
    return 0;
//   ----------------&x matlab address
// ------------------*x  matlab adress ka values

}
//swape refrence
// ------------------pointers----------------------------important question 
#include<stdio.h>
    void swap(int* x, int* y){
        int temp;//----------------------*x and int *x this is a pointers
       temp = *x;// temp =2
       *x = *y; //a=9  ----------------------------------x ke addres per y ka value insert kar do
       *y = temp; // *y =2 -> b=2;
        return;
    }
    int main(){
        int a = 2;
        int b = 9;
        swap(&a,&b);
     printf(" The value op a is %d\n",a);
     printf("The value of b is %d",b);

    
    return 0;

}
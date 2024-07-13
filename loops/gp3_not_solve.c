//display this gp 25,50,100 up to n term 
#include<stdio.h>
/*int main(){
    int a = 25;
    for (int i =1; i < a; i++)
    {
        printf("%d  ",a);
        a =a*2;
    }
    return 0;
} */
//display this gp 100,50,25 up to n term
int main(){
    int a = 100;
    for (int i =1; i < a; i++)
    {
       printf("%d  ",a);
        a =a-25;
    }
    return 0;
} 

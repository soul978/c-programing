//display the ap 100,97,94 up to n tern all which is positive 
#include<stdio.h>
int main(){
    int n=100;
    for (int i = 0; i < n*n-1; i++)
    {
        printf("%d  ",n);
        n=n-3;//second variable
    }
    return 0;
}
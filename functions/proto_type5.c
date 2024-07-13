#include<stdio.h>
int main(){
    void fun ();//-------------------function prototype ,code situated any where the code run properly
    fun();

    return 0;
}
void fun(){
        printf("hello world");
    }
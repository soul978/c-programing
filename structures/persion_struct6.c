//? creaat a sstructure type 'persion ' with  name salary and age as it attributes 
//! declear and initialze 2 variablews for this .
//? print the name of first persion and age of the other
#include<stdio.h>
#include<string.h>
int main(){
    struct persion
    {
        char name[50];
        int salary;
        int age;
    } a ,b;

    a.salary = 55000;
    a.age = 22;
    strcpy(a.name,"shivam pandey");
    
    b.salary = 4500;
    b.age = 20;
    strcpy(b.name,"yesh padey");

    printf(" first persion : %s  \n",a.name);
    printf(" second persion age  : %d ",b.age);
    return 0;
}
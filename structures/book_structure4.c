//? create  astructure type 'bppk' with name price a number of pages aas its attributes;
/*structure persion 
char name [50]
int salary
int age
*/
#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
       char name[50];
       float price;
       int noofpage;
    }a,b,c;
    a.price = 30.333;
    a.noofpage = 500;
    strcpy(a.name,"secreat seven");// it is very use full to in structure;
    //? strcpy help to copy  one varibles into secondes;

    printf("%d\n",a.noofpage);
    printf("%f\n",a.price);
    printf("%s",a.name);


    return 0;
}
//? page no 131;
//Given an array of marks of 10 student if the marks of any student is less than 35 print its roll number.
//roll number here refer to the index of the array.
#include<stdio.h>
int main(){
    int marks[10] = {95,90,31,25,100,50,15,89,97,30};

   //for (int i = 0; i <=9; i++)
   //{
   //    printf("enter the marks of students %d\n",i);
   //    scanf("%d",&marks[i]);
   //
    for (int i = 0; i<10; i++)
    if (marks[i]<35)
    {
         printf("%d ",marks[i]);
         printf("Index of %d\n",i);
    }
    
  
    return 0;
}
// page no 121;
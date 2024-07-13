// count the number of element in given array grater than a given number x.
#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x = 4; int count = 0;// count the number;
    for (int  i = 0; i <=6; i++)
    { 
        if (x<arr[i])
        {  count++; // increase the values;
           
         printf("%d",count);// print the count numbers
        }
       // printf("%d",arr[i]);
    }
    
    return 0;
}

// nice question but one mistake
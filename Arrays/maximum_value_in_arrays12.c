// find the maximum values out of all the elements in the array.
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5], max = INT_MIN;
    for (int  i = 0; i <=5-1; i++)
    { 
        printf("enter the  elemnts %d : ",i);
        scanf("%d",&arr[i]);if (max<arr[i])
        {
            max = arr[i];
        }
      
    }
    printf("The maximum number is %d",max);
    return 0;
}

// page no = 123;
//Given an array of marks of 5 student if the marks of any student is less than 25 print its 
//index number;
#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i <=4; i++)
    {
        printf("enter marks of the student %d\n",i);
        scanf("%d",&arr[i]);
        
    }
    for (int i = 0; i <=4; i++)
    {
        if (arr[i]<25)
        {
            printf("%d ",arr[i]);
            printf(" Is index of %d\n",i);
        }
        
    }
    
    return 0;
}
// page no 120
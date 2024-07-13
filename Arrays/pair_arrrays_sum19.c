// find the total number of pairs the arrays whose sum is equal to the given values x.
#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int a = 12;
    int totalpairs = 0;
    for (int i = 0; i <=7; i++)
    {
        for (int j = i+1; j <=7; j++)
        {
           if (arr[i]+arr[j]==a)
           {
             totalpairs++;
             printf("(%d,%d)\n",arr[i],arr[j]);
           }
           
        }
        

    }
    printf("%d",totalpairs);
    return 0;
}
// page no 124;
// best concept;
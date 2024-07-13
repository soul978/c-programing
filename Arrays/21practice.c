#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {5,5,5,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int  i = 0; i <=4; i++)
    {
        if (max<arr[i])
        {
            smax=max;
           max = arr[i];
        }
        else if (smax<arr[i] && max!=arr[i])
        {
           smax=arr[i];
        }
        
    }
    printf("%d",smax);
    return 0;
}
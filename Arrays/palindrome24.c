// if an arrays arr acontain n element , than check if the arrays is a palindome or not.
#include<stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 6;
    while (i<j)
    {  
        i++;  /// not perfect code its given right answer but one mistake in this code solve soon;
        j--;
    
    if (arr[i]%arr[j]==0 && arr[i]!=arr[j])
    {
        printf("palindrome");
        break;
    }
    else
    {
        printf(" not a palindrome :");
        break;
    }

    }
    
    return;
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    reverse(arr);
    for (int  i = 0; i <=6; i++)
    {

        printf("%d ",arr[i]);
        
    }
    

    return 0;
}
// try run 
// page no 126;

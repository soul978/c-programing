// find th e unique number in a given arrays where all the elements are 
// being repeated twice with one values being unique .
#include<stdio.h>
#include<stdbool.h>
int main(){  // good question try run in copy
    int arr[7] = {1,3,2,4,1,2,3};
    for (int i = 0; i <=6; i++)
    {
      bool x = false;
        for (int j = i+1; j <=6; j++)
        {
          if (arr[i]==arr[j])
          {
            x=true;
          }
          
        }
        if (x==false)
        {
          printf("%d",arr[i]);
          break;
        }
        
    }
    
    return 0;
}
// page no 128;
// try run in the copy;
// last question ;
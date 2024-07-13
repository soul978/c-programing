// given an array of integer, change the value of all odd index elements 
//to its second multiple and increment all even indexed values by 10;

#include<stdio.h>

//int main(){
//    int arr[8] = {1,2,3,4,5,6,7,8};
//    for (int  i = 0; i <=7; i++)
//    {
//        if (arr[i]%2==0)
//        { int a = arr[i]*2;
//            printf("odd %d\n",a);
//        }
//       
//        if (arr[i]%2)
//        { int b = arr[i]+10;
//            printf(" even %d ",b);
//        }
//        
//        //printf("%d",arr[i]);
//    }
//    
//    return 0;
//}
//----------------------------------or-------------------------------

int main(){
    int aarr[8] = {1,2,3,4,5,6,7,8};
    for (int  i = 0; i <=7; i++)
    {
      if (i%2!=0) aarr[i]*=2;
      else aarr[i]+=10;
    }
    for (int  i = 0; i <=7; i++)
    {
        printf("%d ",aarr[i]);
    }
    
    return 0;
}
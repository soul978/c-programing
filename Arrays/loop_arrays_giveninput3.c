//------------------------------- take input and print the number----------------------------------------------
//---------------------------------help of loop print arrays--------------------------------------------

//-----------------------------------important question---------------------------------------------------
#include<stdio.h>
int main(){
    int arr[5];  
      
    for (int i = 0; i <=4; i++) {  // loop runing 1 to 4
      //  int a = i+1;
     printf("enter element number %d\n",i); // acording to loop it also print one by one
    scanf("%d",&arr[i]);  // take input of loop 
    }
    for (int i = 0; i <5; i++)
    {
      printf("%d ",arr[i]);// ------------------help of loop give the answer------------------------
    }
    return 0;
}
//---------------------------------------taking input than give the number--------------------------------------
//  int n;
//     printf("which elements show :");
//     scanf("%d",&n);  // -----------------take input
//     printf("%d",arr[n]);   // show element which you give input
//    return 0;
//}
// page no 119
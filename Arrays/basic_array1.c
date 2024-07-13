//-------------------------------------------- page 118 and 119--------------------------------------------

#include<stdio.h>
//int main(){
   // int a[5];// 5 dabbe or spaces create kar liye hai
//---------------------------------------------------------------------------------------------

// integer arrays

   // int arr[5] = {2,4,6,8,1};// ye tarika hai array (enicialization and decleration) ka 

    // indexing[0,1,2,3,4]---------------------------

   // arr[4] = 100; //update the integer {2,4,6,8,100}
   // arr[1] = 1; // after updating {2,1,6,8,100}

   // printf("%d\n",arr[4]);
   // printf("%d",arr[1]);
 
  // return 0;}

  //------------------------------------second methods------------------------------

  int main(){
    int a[4];
   printf("enter the first number :"); scanf("%d",&a[0]);
   printf("enter the second number :"); scanf("%d",&a[1]);
   printf("enter the third number :"); scanf("%d",&a[2]);
   printf("enter the fourth number :"); scanf("%d",&a[3]);
   printf("%d\n%d\n%d\n%d\n",a[0],a[1],a[2],a[3],a[4]);
    return 0;
  }

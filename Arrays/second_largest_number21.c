// find the second largest elements in the given arrays;
//#include<stdio.h>
//#include<limits.h>
//int main(){
// int n, arr[7];
// for (int  i = 0; i <=6; i++)
// {
//   printf("enter the %d number ",i);
//   scanf("%d",&arr[i]);
// }
//  
//   int arr[7] ={1,2,6,4,5,7,3};// {-10,-4,-200,-80,-19,-5,-12};
//    int max = INT_MIN;// sabse chota number;
//    int smax = INT_MIN;
// for (int i = 0; i <=6; i++)// -------------its find maximum values
// {
//     if (max<arr[i])//----------------------------------------------------1
//     {
//         max=arr[i];//--------------------------------------------------1
//     }
//     
// }
// for (int i = 0; i <=6; i++)//--------------------its find second largest values;
// {
// if (arr[i]!=max && smax<arr[i])//this line is  important ----------------------2
//   {
//      smax=arr[i];//-----------------------------------------------------------2
//   }
// 
// }
// printf("%d",smax);
//  return 0;    
//}
//!-------------------------------------------------or--------------------------------------------------- 
#include<stdio.h>
#include<limits.h>
int main(){
  int arr[7] = {1,2,3,4,4,2,1};//  !---------------------------try run -----------its diffrent-----------------
  int max = INT_MIN;
  int smax = INT_MIN;
  for (int i = 0; i <=6; i++)
{
  if (max<arr[i])//*---------------------------------------------------1
  { //?------------------------if codition not run means max>arr[i] in this way condition hot hit


    smax = max; // smax now store previous max
    max = arr[i];
  }//?-------------------------------------------------------------------1
  else if (smax<arr[i] && max!=arr[i])  //todo-------------------yadi if condition ek bar run hoker stop ho jaiye to else if use kart
 //                                      ? -------------karte hai
  {
    smax = arr[i];
  }
  
}   ///todo------------------yaadi first code nahi chalega to 2 means (else if) code chalega--------------------
 
  printf("%d",smax);              
  return 0;
}
// page number 124 and 125 and 126 full question solve
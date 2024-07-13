// give array & anumber 'x' . find out if 'x' 
//lies in the array or not ,if yes than print the index.

//#include<stdio.h>
//int main(){
//    int arr[7] = {54,45,64,64,23,86,89};
//    int x = 64;
//    for (int i = 0; i <=6; i++)
//    {
//        if (arr[i]==x)
//        {
//            printf("%d is present in the arrays and its index is %d\n",x,i);
//           // break;
//        }
//        
//    }
//    
//    return 0;
//}

// in this question two question are exist
// 1= find out in arrays first pair elements index
// find out all element   index in the arrays;

// ---------------------------------0r-------------------------------------


#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {12,21,21,42,21,6,7};
    int index = -1;
    int x = 42;
    bool flag = false; // false means not present 
    for (int i = 0; i <=6; i++)
    {
        if (arr[i]==x)
        {
            flag = true;
            index = i;// store the true values
            break;
        }
        
    }
    if (flag==false)
    {
        printf("%d is not present in the arrays ",x);
    }
    else
    {
        printf("%d is present in the arrays and its index is %d",x,index);
    }
    
    return 0;
}
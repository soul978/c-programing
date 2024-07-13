//predict the output
//point out the errors(if any ) in the following code:
#include<stdio.h>
int main(){
    int i,a =3, b=4;
    int arr[3+4];
    for ( i = 0; i <=a+b; i++)
    {
        scanf("%d",&arr[i]);
        printf("\n%d",i);
    }
    
    return 0;
}

//-------------------------------------wrong question---------------------------
// int main(){
//    int size ;
//    scanf("%d",&size);
//    int arr[size];
//    for (int i = 1; i <=size; i++)
//    {
//        scanf("%d",arr[i]);
//        printf("%d",arr[i]);
//    }
//    
//    return 0;
// }
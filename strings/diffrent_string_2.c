#include<stdio.h>
int main(){
    //? char arr[] = {'h','e','l','l','o','\o'}; -----------------------first inicialization


    //!char arr[] = "shivam pandey";//! -----seconds inicialization;

// todo--------------------------------------------------------------------------------

    //!int n = 0;
    //!while (n<13)
    //!{
    //!    printf("%c",arr[n]);
    //!    n++;
    //!}
    //!
    //* or---------------------------------------------

    //?-----------------------------------------------------------  
    char arr[] = "hello world\0";
    int n = 0;
    while (arr[n]!='\0')
    {
        printf("%c",arr[n]);
        n++;
    }
    
    return 0;
}
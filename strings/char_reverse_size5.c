//! sie of characters :
//? reverse the charactersof the strings;
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    puts("enter the string :");
    scanf("%[^\n]s",str);
  //? automatic \n laga deta hai;
    int size = 0;
    int k = 0;
    while (str[k]!='\0')
    {
        size++;
        k++;
    }
     printf(" the size is : %d",size);
     printf("\n");
    for (int i = 0,j=size-1; i<=j; i++,j--)
    {
       char temp = str[i];
       str[i] = str[j];
       str[j] = temp;
    }
    puts("the reverse string is :");
    puts(str);
   
    return 0;
}
//?page no 144;
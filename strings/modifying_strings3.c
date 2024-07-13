//! modifying the string or update tyhe string;-----------
#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "collegewallah";
    str[1] = 97;
    int i = 0;
    while(str[i]!='\0')
    {
       //! printf("%c ",str[i]);----------------------or
        // printf("%c",i[str]);
        // printf("%c",*(str+i));
         printf("%c",*(i+str));
        i++;
    }
    
    return 0;
}
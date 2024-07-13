//? write a function to innser a new character ,
//?in a string at a given index position.
//!  college   2nd index--'l'=colllege;
#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "college";
    printf("%s\n",str);
    //! in 2nd index innser 'l';
    for (int i = 6; i >=2; i--)
    {
        str[i+1] = str[i];
    }
    str[2]='l';
    printf("%s",str);
    return 0;
}//? page no 148;      
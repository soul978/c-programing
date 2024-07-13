//? diffrent between normal initalization and pointers initalization
#include<stdio.h>
int main(){

    //! pointer initalizaation ----------------------------------------------------
    char* ptr = "college wallah";
  // ptr[0] = 'p';// pointer not change individual charactrs it can only change hole charaters:
    ptr = "physics wallah";//? it can change or modifying hole string:
    printf("%s",ptr);

    //?normal initalizaton-----------------------------------------------------------
     char str[] = "college wallah";
     str[0] = 'p';//? normal initalization only change individual character ,but not change hole string
    // str[1] = "shivam ";// not change hole string
     printf("\n%s",str);

    return 0;
}
//! writen in page no 144;
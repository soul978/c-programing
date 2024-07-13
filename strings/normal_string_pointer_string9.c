#include<stdio.h>
int main(){
    char* s1 = "physics wallah";//!------------------------pointer string
    char*s2;
    s2 = s1;
    s2 ="college wallah";//? ----------------------------correct initalizaation
    printf("%s",s1);
    printf("\n%s",s2);


//?-----------------------------------normal string;
    // char s1[] ="physics wallah";
    // char s2[15];
    // s2 = s1;//? -------------------------------------------this is wrong initialization
    // printf("%s",s1);
    // printf("%s",s2);
     return 0;
 }
//? copy the content of stirng s2 to string s1;
#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "shivam pandey";
    char s2[20];
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}
//?page no 147;
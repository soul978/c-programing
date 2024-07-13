//? basic strings
#include<stdio.h>
int main(){
//!char arr[5] = {'a','b','c','d','e'};
//!for (int i = 0; i < 5; i++)
//!{
//!    printf("%c ",arr[i]);
//!}
//!
// char f = 'A';   //?---------------------65
// char b = 'a';//?------------------------97
// char c = '0';//?-------------------------48
// char d = '9';//?---------------------------57
// char ch = '10';//?
// 
// int x = (int)f;//?----------------- typing casting
// int y = (int)b;//?----------------- typing casting
// int z = (int)c;//?----------------- typing casting
// int a = (int)d;//?----------------- typing casting
// int v = (int)ch;//?----------------- typing casting ---------------------------- hover flow
// printf("%d     %d    %d    %d   %d",x,y,z,a,v);
//?-----------------------------------------------------
char arr[] = {'h','e','l','l','o'};
int i = 0;
while (arr[i]!='\0')
{
    printf("%c ",arr[i]);
    i++;
}

return 0;
}
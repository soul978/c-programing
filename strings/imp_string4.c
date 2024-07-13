#include<stdio.h>
#include<string.h>
int main(){
  //  char str[] = "college wallah is the best ";
  // //! printf("%s",str);--------or
  // //puts(str);//?----------------0r
  // puts("hello");

//?-----------------------------input-------------------------------
    char str[20];
  //  scanf("%s",str); -----------------------------only single line print
  scanf("%[^\n]s",str);//!--------------take input many world 2nd methods
   // gets(str);//?------------------------3rd methods;
    printf(" your input is : %s",str);//? only first charater are condiderd
    return 0;
}
//?page no 143
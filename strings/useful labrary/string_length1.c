//? find the length of the charaters
#include<stdio.h>
#include<string.h>
int main(){
    char* str ="shivam"; //? its not count '\0'  total = string character given 6 but in real its 7;
    int x = strlen(str);
    printf("%d",x);
    return 0;
}//? page no 146 to 147;
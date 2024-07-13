/*#include<stdio.h>
int main(){
    char* ptr = "physics wallah";//? pointers = pointers oly read not update and not change; 
    printf("%s",ptr);
    return 0;
}//? characters pointers can also  be used to store adress of a strings;
//? initialization imformation in diffrent initalization6.c
//!
//?pointer initialization we can modifying only individual characters but not entier string.
//!pointer initialization we can moddifying hole string or entire
//! string , but not individual characters,--------------
//?pointer not moddifying a string its create a new strings 
//?after create a new string the old string was lost*/
//#include<stdio.h>
//int main(){
    //  char* ptr = "college wallah";
    //  ptr ="physics wallah";///* first initialization are lost; 
    //  printf("%s",ptr);
//!----------------------------------------------------------------------
    // char str[] = "college wallah";
    // char* p = str;
    // *p = 'p';//? its only change characters first words;
    // printf("%s",str);
    
//? change first characters in a strings; second me koi bhi change karenge to first walle me bhi hoga
    #include<stdio.h>
    int main(){
        char s1[] ="physics wallah";
        char* s2 =s1;
        s1[0] = 'm';
        printf("%s",s2);
        return 0;
    }
    //return 0;
//}

// how fuction work
#include<stdio.h>
 void england(){//------------------------------------  means null nothing return values 
    printf("you are in England\n");
    return;
}
 void australia(){//---------------------------------------4
    printf("you are in australia\n");
    england();//----------------------------------calling england//5
    return;
}
 void india(){//------------------------------------------//2
    printf("you are in india\n");
    australia();//-------------------------calling australia//3
    return;
}
int main(){
    india();//--------------------------------calling india  //1
    return 0;
}
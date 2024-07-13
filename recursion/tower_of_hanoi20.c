// -----------------------tower of hanoi------------------
//-----question based on pre in post--------------
//-------this concept match with python (last in first out) ;
// play game tower of hanoi
#include<stdio.h>
// s=source ,h=helper, d=distination;
void tower(int n, char s, char h, char d){
    if(n==0) return;
   tower(n-1, s,d,h);
   printf("%c to %c\n",s,d);
   tower(n-1,h,s,d);
    return ;
}
int main(){
    int n;
    printf("enter  number of disks :");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return 0;
}

// page 116 and 117;
//-----------------------done------------------------------
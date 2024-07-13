// maze path    n=4 m=4 ==20

#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;// todo if return 1
    if (cr==er)
    {//? only rightways call
        rightways += maze(cr,cc+1,er,ec);//!inly rightway calling
    }
    if (cc==ec)//!condition show which one is equeal or noot
    {//! only downways call
        downways += maze(cr+1,cc,er,ec);//!condition is true than wxicute
    }
    if (cr<er && cc<ec)
    {
        rightways += maze(cr,cc+1,er,ec);//todo right word
         downways +=maze(cr+1,cc,er,ec);//!left word
    }
    
    int totalways = rightways + downways;
     return totalways;

}
int main(){ //? main function run after function
    int n;
    printf("enter no of rows of the maze :");
    scanf("%d",&n);
    int m;
    printf("enter the columns op the maze :");
    scanf("%d",&m);
    int noofways = maze(1,1,n,m);
    printf("%d",noofways);
    return 0;
}
//page 110
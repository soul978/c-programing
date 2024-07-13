#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[20];
    }pokemon;
    pokemon arr[3];
    arr[0] .hp =500;
    arr[0] .speed =100;
    arr[0] .attack =1200;
    arr[0] .tier = 'a';
    strcpy(arr[0].name,"shivam pandey");

    arr[1] .hp =150;
    arr[1] .speed =10;
    arr[1] .attack =130;
    arr[1] .tier = 's';
    strcpy(arr[1].name,"rajiv verma");

    arr[2] .hp =150;
    arr[2] .speed =30;
    arr[2] .attack =20;
    arr[2] .tier = 's';
    strcpy(arr[2].name,"yesh pandey");

    for (int i = 0; i < 3; i++)
    {
       printf("%s\n",arr[i].name);
       printf("attack : %d\n",arr[i].attack);
       printf("hp : %d\n",arr[i].hp);
       printf("speed : %d\n",arr[i].speed);
       printf("tier : %c\n",arr[i].tier);
    }
    
    //!page no 153;
    return 0;
}

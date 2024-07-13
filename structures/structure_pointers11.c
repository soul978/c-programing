//? sturcture pointers
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon
{
   int hp;
   int speed;
   int attack;
   char tier;
   char name[12];
}pokemon;

int main(){
    pokemon pikachu;
    pikachu.hp = 60;
    pikachu.speed = 70;
    pikachu.tier = 'a';
    strcpy(pikachu.name,"pikachu");
    // int* x  => address of integer values;
    pokemon* x =&pikachu;
    printf("%p\n",&pikachu.hp);
    printf("%p\n",&pikachu.attack);
    printf("%p\n",&pikachu.speed);
    printf("%p\n",&pikachu.tier);
    printf("%p\n",pikachu.name);//?-----------stirng me && nahi lagate hai
    return 0;
}
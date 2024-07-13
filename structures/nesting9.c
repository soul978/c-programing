//? nesting one structure within another structure;
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct pokemon //? data type 1st------------
    {
        int hp;
        int speed;//? mormal pokemon ability
        int attack;
        char tier;
        char name[15];
    }pokemon;

    typedef struct legendarypokemon //? data type 2nd;
    {   pokemon normal;//?---------------------this is first pokemon;
       char ability[10];
    }legendarypokemon;
    typedef struct godpokemon
    {
       legendarypokemon legend;
       int specialattack;
    }godpokemon;
    
    godpokemon assur;
    assur.specialattack = 300;
   strcpy(assur.legend.ability,"turn anyone to stone");
   assur.legend.normal.attack= 500;

    legendarypokemon mentwo;
    strcpy(mentwo.ability,"pressure");
    mentwo.normal.attack = 150; //? normally ke jagah kuch bhi likh shake hai;
    mentwo.normal.hp = 180;
    strcpy(mentwo.normal.name,"mewtwo");//?---------isko nestion kahte hai;
    mentwo.normal.speed = 100;
    mentwo.normal.tier = 's';
    return 0;
}
//? page no 156 and 157;
//! try run soon;
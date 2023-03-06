#include<stdio.h>

struct Employee{

    int id;
    char name[100];

};

int main(){

struct Employee s1 ={13,"Rama"};

printf("%d %s", s1.id,s1.name);

    return 0;

}
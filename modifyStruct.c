#include<stdio.h>
#include<string.h>


struct MyStructure{

    int id;
    char division;
    char name[200];
}s1;


int main(){

    //initializing the value 
    struct MyStructure s1={1,'A',"Rama"};

    //modify the value 
    s1.id=2;
    s1.division='B';
    strcpy(s1.name,"Sam");

    //print
    printf("%d %c %s", s1.id,s1.division,s1.name);
    
    return 0;

}
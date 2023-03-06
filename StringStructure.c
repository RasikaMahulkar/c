#include<stdio.h>
#include<string.h>


struct Student{

    int id;
    char name[100];
    char branch[12];

}s1;

int main(){

//assign the value 
s1.id=1;
s1.name;
s1.branch;

//printing the value 
printf("My id is:%d",s1.id);
//if we use throws error - assignmeny to expression with arrays types
// printf("My name is : %s",name);

strcpy(s1.name,"Rama");
printf("\nMy name is:%s",s1.name);

strcpy(s1.branch,"CSE");
printf("\nMy name is:%s",s1.branch);


   
    return 0;

}
#include<stdio.h>

struct Student{

    int id;
    char division;

}s1;

int main(){

//create a structure varible of myStructure called s1
//struct myStudent s1;

//Assign values to member s1
s1.id=1;
s1.division='A';

//printing vlaues 
printf("My id  is :%d",s1.id);
printf("\nMy division is:%d", s1.division);

return 0;

}
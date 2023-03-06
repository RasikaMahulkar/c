#include<stdio.h>

struct Employee{

    int id;
    int floor;
}s1;

int main(){

    struct Employee s1 ={1,2};

    //create another structure varaible
    struct Employee s2;

    s2=s1;

    //change the value 
    s2.id=2;
    s2.floor=4;

    printf("%d %d",s2.id,s2.floor);
    
    printf("\n%d %d",s1.id,s1.floor);
 

    
    return  0;

}
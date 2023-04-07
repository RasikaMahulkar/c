//Value of operator/ indirection operator/ derefernce operator 
    
#include<stdio.h>
int main(){
    
int number=10;

int *ptr = &number;

printf("%d",ptr);

printf("\n%d", *ptr);//it will print the value store at the number 


    return 0;

}

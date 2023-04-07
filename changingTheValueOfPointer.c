#include<stdio.h>
int main(){
    
    int number=10;
    int *ptr = &number;
    *ptr=23;
    
    //changing the value of ptr 
    printf("%d",*ptr);


    return 0;

}


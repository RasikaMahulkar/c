//decalaring and assigning the value to pointer varaible 

#include<stdio.h>
int main(){
    
    int number=12;

    int *ptr = &number;

    printf("%d",ptr);
    //printf("\n%p",number);
    

    return 0;

}
//this gives the address of the &variable
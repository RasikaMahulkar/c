#include<stdio.h>
int main(){

int a =10;
int *ptr; // pointer is made
ptr = &a; // pointer can storeadd of the other 

printf("This will print the addess at the pointer : %d",ptr);
printf("\nThis will print the value at the add :%d",*ptr);

//cross check 
printf("\n %d",&a);
printf("\n %d",a);

    return 0;

}
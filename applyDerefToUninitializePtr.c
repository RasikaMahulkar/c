#include<stdio.h>
int main(){
    
    int number=10;
    
    //1.not initializing the ptr 
    int *ptr;
    //assigning the value to the uninitialize opeartor 
    *ptr=1;

    //printing with the derefrencing the pointer 
    printf("%d",*ptr);
    printf("%d",*ptr);


    //1.gives somes undefined behaviour
    //2.error: gives the segmentation eroor  
    return 0;

}
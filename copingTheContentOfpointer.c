
#include<stdio.h>
int main(){
    
    int i = 10;
    int *ptr1, *ptr2;

    //assigning the mmeory address of i in *ptr1
    ptr1 = &i;

    //assigning the ptr1 value in ptr2 |  no now the both the pointer will points towards the memory addres sof i 
    ptr2 = ptr1;

    printf("%d %d", *ptr1, *ptr2);

    return 0;

}
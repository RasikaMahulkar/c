/*
In C we cant assign & copy the content of string into another string
for this purpose we nned to use the pointer varaible 

*/
#include<stdio.h>
int main(){
    
    char * p ="hello Mumbai";
    printf("String p :%s",p);

    //cpying the string into the another sting

    char *q =p;
    printf("\n String q: %s",q);
    
    return 0;

}
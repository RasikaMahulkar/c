#include<stdio.h>
int main(){
    
    int number =11;

    if((number% 11==0 ) && (number%10==0)){
        printf("The number is divisible by 11 and 10 ");

    }

    else{
        printf("The number us not divisible by 11 and 10");

    }

    return 0;

}
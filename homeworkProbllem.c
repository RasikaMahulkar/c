#include<stdio.h>
int main(){
    
    int i =1;
    int *p = &i;

    q=p;

    *q = 5;

    printf("%d", *p);

    return 0;

}
//error will be get displayed 
c
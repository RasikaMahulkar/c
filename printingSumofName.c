#include<stdio.h>
int main(){

    int sum =0;
    char name[20];
    int i=0;

    printf("\n Enter the name:");
    scanf("%s",name);

    while(name[i]!='\0'){

        printf("\n The ASCII value of the charecter %c is %d",name);
        sum= sum+name[i];
        i++;

    }
    printf("\n The sum of the ascii value of string is %d", sum);

    return 0;

}
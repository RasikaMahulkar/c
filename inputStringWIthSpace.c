#include<stdio.h>
int main()
{

//enter the strig with space 

char string[130];

printf("Enter the string:");
scanf("%[^\n]s", string);
printf(string);



    return 0;

}
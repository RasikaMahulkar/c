#include<stdio.h>
#include<string.h>

int main(){

char s[11]= "javatpoint";
int i= 0;
int count = 0;


while(i<11){

    if(s[i]=='a'|| s[i]=='e', s[i]=='i', s[i]=='o', s[i]=='u'){

        count++;

    }
    i++;

}

printf("\n The vowels in the string are:%d",count);

    return  0;

}
//not giving proper answer 
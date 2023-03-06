#include<stdio.h>
int main(){

    char s[11]="Javatpoint";
    int i =0;
    int count =0;

    while(s[i] != NULL){
       
        if(s[i]=='a',s[i]=='e',s[i]=='i',s[i]=='o',s[i]=='u'){
            count++;
        }
        i++;
    }
    printf("\n The vowels are : %d", count);
    return  0;

}
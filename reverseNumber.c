#include<stdio.h>
int main(){
    
    int number, reminder,reverse=0;

    printf("The number enter is :");
    scanf("%d",&number);

  while(number!=0){

   reminder= number%10;
   reverse = reverse*10+reminder;
   number /=10;
   } 
   printf("Reversed number is :%d",reverse);

    return  0;

}

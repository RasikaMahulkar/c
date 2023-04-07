#include<stdio.h>
#include<math.h>

int main(){
    
    int num1, num2, num3, discriminant, r1, r2;

    printf("Enter the numbers");
    scanf("%d%d%d", &num1,&num2,&num3);

    discriminant = num2*num2 - 4 *num1*num3;
    //printf("%d",compute);

    // condition of real and different roots 
    if(discriminant>0){

        r1 = -num2+sqrt(discriminant)/(2*num1);
        
        r1 = -num2-sqrt(discriminant)/(2*num1);

        printf("\n The real roots =%d %d", r1,r2);

 
    }
   // condition for real and equals roots 
    else if(discriminant == 0){

            r1= -num2/(2*num2);

            r2= -num2/(2*num2);

             printf("Roots are equal = %d %d", r1,r2);
        }
// of roots are not real 
    else{
             printf("\n Roots are imaginary");

        }
    
    
    return  0 ;

}
#include<stdio.h>
int main()
{
   int i =10, j = 20;

   int *p, *q;

   p =&i;
   q= &j;

   *q = *p;

   //*q = *p is not as same as p=q 
   // it repplace the value of *p with *q 
   
   printf("%d %d", *p ,*q);

    return 0;

}
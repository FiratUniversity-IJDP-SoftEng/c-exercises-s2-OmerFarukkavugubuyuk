#include <stdio.h>

int main() {
   int array[17];
   int counter=0;
   
   for(int i=100;i>=50;i--)
   {
       if(i%3==0)
       {
           array[counter]=i;
           counter++;
           
       }
   }
   
   for(int j=0;j<17;j++)
   {
       printf("%d ",array[j]);
   }

    return 0;
}

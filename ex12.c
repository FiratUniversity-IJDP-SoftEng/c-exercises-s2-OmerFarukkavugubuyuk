#include <stdio.h>

int main() {
     int number;
     long long factorial=1;
     
     scanf("%d",&number);
     
     if(number<50)
     {
        for(int i=1;i<=number;i++)
        {
         factorial=factorial*i;
        }
        printf("Factorial = %lld ",factorial);
     }else
     {
         printf("Please enter a number less than 50 ");
     }
     
    return 0;
}

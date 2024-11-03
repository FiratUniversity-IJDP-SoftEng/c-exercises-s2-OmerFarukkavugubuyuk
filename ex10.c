#include <stdio.h>

int main() {
   int number=1;
   for(number;number<=10;number++)
   {
        for(int i=1; i<=10;i++)
            {    
            printf("%3d ",number*i);
            }
        printf("\n");
   }
    return 0;
}

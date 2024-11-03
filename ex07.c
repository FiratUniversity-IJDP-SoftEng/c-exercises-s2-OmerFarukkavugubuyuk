#include <stdio.h>
int column1(int i)
   {
       i=i*5;
       return i;
   }
int column2(int i)
   {
      i= 100-((i-1)*10+1);
       return i;
   }
int main() {
    for(int j=1;j<=10;j++)
    {
        printf("%d,%d,%d\n",column1(j),column2(j),j);
    }
    return 0;
}

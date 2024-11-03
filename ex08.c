#include <stdio.h>

int main() {
    int array[10];
    float sum=0.0;
    float average=0.0;
    for(int i=0;i<10;i++)
    {
        printf("Please enter %d. number= ",i+1);
        scanf("%d", &array[i]);
        sum= sum + array[i];
    }
    
    for(int j=0;j<10;j++)
    {
        printf("%d. number of array %d \n",j+1,array[j]);
        
    }
    printf("Sum= %.2f\n",sum);
    average=sum/10.0;
    printf("Average= %.2f",average);
    
    return 0;
}

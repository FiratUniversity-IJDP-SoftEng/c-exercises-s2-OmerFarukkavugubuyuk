#include <stdio.h>

int main() {
    
    float sum=0.0;
    float average=0.0;
    int number;
    int counter=0;
    
    while(1)
    {   
        printf("Please enter a number(enter -1 for exit ) = ");
        scanf("%d",&number);        
        if(number==-1)
        {
            break;
        }
        sum=sum+number;
        counter++;
    }
    
    average= sum/ counter;
    printf("Sum = %.2f\n ",sum);
    printf("Average = %.2f ",average);
    return 0;
}

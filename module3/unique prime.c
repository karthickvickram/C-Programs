#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,till,i,count=0;
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            while(num%i==0)
            {
                num=num/i;
            }
            count++;
        }
    }
    printf("%d",count); 
    return 0;
}

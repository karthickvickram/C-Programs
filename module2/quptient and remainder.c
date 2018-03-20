#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,i,j,x,dividend,divisor,quotient;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d %d\n",&dividend,&divisor);
        x=dividend;
        quotient=0;
        for(j=0;dividend>=divisor;j++)
        {
           dividend=dividend-divisor;
           quotient++;
        }
        printf("%d / %d = %d\n",x,divisor,quotient);
        printf("%d %% %d = %d\n",x,divisor,dividend);
    }
    return 0;
}

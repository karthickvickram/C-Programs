#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,a;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&a);
        if(a<1)
        {
            printf("Wind condition is calm\n");
        }
        if(a>=1 && a<=3)
        {
            printf("Wind condition is Light Air\n");
        }
        if(a>=4 && a<=27)
        {
            printf("Wind condition is Breeze\n");
        }
        if(a>=28 && a<=47)
        {
            printf("Wind condition is Gale\n");
        }
        if(a>=48 && a<=63)
        {
            printf("Wind condition is Storm\n");
        }
        if(a>63)
        {
            printf("Wind condition is Hurricane\n");
        }
    }
    return 0;
}

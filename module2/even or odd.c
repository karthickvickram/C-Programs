#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=0;a>0;j++)
        {
            a=a-2;
        }
        if(a==0)
        {
            printf("EVEN\n");
        }
        else
        {
            printf("ODD\n");
        }
    } 
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;
    float a;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a);
        for(j=0;a>2;j++)
        {
            a=a/2;
        }
        if(a==2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

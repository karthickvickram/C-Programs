#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,n1,n2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d\n",&n1,&n2);
        if(n1<n2)
        {
            printf("%d < %d\n",n1,n2);
        }
        else
        {
            printf("%d < %d\n",n2,n1);
        }
    }
    return 0;
}

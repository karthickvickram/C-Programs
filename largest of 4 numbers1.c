#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,n1,n2,n3,n4;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&n1);
        scanf("%d ",&n2);
        scanf("%d ",&n3);
        scanf("%d\n",&n4);
        if(n1>n2 && n1>n3 && n1>n4)
        {
            printf("Largest of %d, %d, %d, %d is %d\n",n1,n2,n3,n4,n1);
        }
        if(n2>n1 && n2>n3 && n2>n4)
        {
            printf("Largest of %d, %d, %d, %d is %d\n",n1,n2,n3,n4,n2);
        }
        if(n3>n1 && n3>n2 && n3>n4)
        {
            printf("Largest of %d, %d, %d, %d is %d\n",n1,n2,n3,n4,n3);
        }
        if(n4>n1 && n4>n2 && n4>n3)
        {
            printf("Largest of %d, %d, %d, %d is %d\n",n1,n2,n3,n4,n4);
        }
    }
    return 0;
}

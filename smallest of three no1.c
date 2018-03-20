#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,n1,n2,n3;
    scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d\n",&n1,&n2,&n3);
            if(n1<n2 && n1<n3)
            {
                printf("Smallest of %d, %d, %d is %d\n",n1,n2,n3,n1);
            }
            if(n2<n1 && n2<n3)
            {
                 printf("Smallest of %d, %d, %d is %d\n",n1,n2,n3,n2);
            }
            if(n3<n1 && n3<n2)
            {
                 printf("Smallest of %d, %d, %d is %d\n",n1,n2,n3,n3);
            }
        }
    return 0;
}

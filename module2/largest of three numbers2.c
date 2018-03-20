#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,n1,n2,n3,max1,max,min1,min2,min,med;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d\n",&n1,&n2,&n3);
        max1=(n1>n2)?n1:n2;
        min1=(n1<n2)?n1:n2;
        max =(max1>n3)?max1:n3;
        min2=(max1<n3)?max1:n3;
        min =(min1<min2)?min1:min2;
        med =(min1>min2)?min1:min2;
        printf("%d > %d > %d\n",max,med,min);
    }
    return 0;
}

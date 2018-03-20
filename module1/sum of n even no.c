#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,val,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&val);
      sum=val*(val+1);
        printf("%d\n",sum);
    }
    
    return 0;
}

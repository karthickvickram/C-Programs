#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,a,digit,rev;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        rev=0;
        while(a!=0)
        {
            digit=a%10;
            rev=(rev*10)+digit;
            a=a/10;
        }
        printf("%d\n",rev);
    }
    return 0;
}

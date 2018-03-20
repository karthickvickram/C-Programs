#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int option,num,digit,evens=0,odds=0,ep=1,op=1,result;
    scanf("%d",&option);
    scanf("%d",&num);
    while(num)
    {
        digit=num%10;
        if(digit%2==0)
        {
            evens=(digit*ep)+evens;
            ep*=10;
        }
        if(digit%2!=0)
        {
            odds=(digit*op)+odds;
            op*=10;
        }
        num/=10;
    }
    if(option==0)
    {
        result=(odds*ep)+evens;
        printf("%d",result);
    }
     else 
    {
        result=(evens*op)+odds;
        printf("%d",result);
    }
    return 0;
}

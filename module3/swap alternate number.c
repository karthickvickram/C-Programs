#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num,nod=0,temp,digit,newnum=0,pow=1,d1,d2,d3,rem;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        nod++;
        num/=10;
    }
    num=temp;
    if(nod%2==0)
    {
        while(num)
        {
            digit=num%100;
            d1=digit%10;
            d2=digit/10;
            d3=(d1*10)+d2;
            newnum=newnum+(d3*pow);
            pow*=100;
            num/=100;
        }
         printf("%d",newnum);
    }
    else
    {
        rem=num%10;
        num=num/10;
       while(num)
        {
            digit=num%100;
            d1=digit%10;
            d2=digit/10;
            d3=(d1*10)+d2;
            newnum=newnum+(d3*pow);
            pow*=100;
            num/=100;
        } 
        newnum=(newnum*10)+rem;
        printf("%d",newnum);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,a[10],i;
    scanf("%d",&n);
        for(i=0;i<=n;i++)
    {
               scanf("%d",&a[i]);
        
    }
    for(i=0;i<=n;i++)
    {
        switch(a[i])
        {    
            case 1:
        {
        printf("January has 31 days\n");
        break;
        }
            case 2:
        {
        printf("February has 28 days\n");
        break;
        }
            case 3:
        {
        printf("March has 31 days\n");
        break;
        }
            case 4:
        {
        printf("April has 30 days\n");
        break;
        }
            case 5:
        {
        printf("May has 31 days\n");
        break;
        }
            case 6:
        {
        printf("June has 30 days\n");
        break;
        }
            case 7:
        {
        printf("July has 31 days\n");
        break;
        }
            case 8:
        {
        printf("August has 31 days\n");
        break;
        }
            case 9:
        {
        printf("September has 30 days\n");
        break;
        }
            case 10:
        {
        printf("October has 31 days\n");
        break;
        }
        case 11:
        {
        printf("November has 30 days\n");
        break;
        }
            case 12:
        {
        printf("December has 31 days\n");
        break;
        }
        }
    }    
    return 0;
}

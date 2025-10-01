#include <stdio.h>
int main()
{
    int a;
    printf("enter a number");
    scanf("%d", &a);

    switch ((a > 0) - (a < 0))
    {
    case 1:
        printf("the number is positive");
        break;
    case -1:
        printf("the number is negative\n");
        break;
    case 0:
        printf("the number is zero\n");
        break;
        
    }
}

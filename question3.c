#include<stdio.h>
int main(){
    int b, reversed;
    int d1,d2,d3;
    printf("enter a 3-digit  number");
    scanf("%d",&b);

    d1= b %10;
    d2=(b/10) %10;
    d3 = b/100;

    reversed = (d1*100)+(d2 *10) + d3;

    printf("revsersed number :%d\n",reversed);

    return 0;
}
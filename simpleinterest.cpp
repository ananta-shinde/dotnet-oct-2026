#include<iostream>

int main()
{
    float p,r,n;
    printf("enter principle amount:");
    scanf("%f",&p);
    printf("enter rate of interest:");
    scanf("%f",&r);
    printf("enter no of years:");
    scanf("%f",&n);
    printf("%f",(p*r*n)/100);

    return 0;
}

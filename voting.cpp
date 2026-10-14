#include<iostream>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age >= 18)
        printf("your are eligible");
    else
        printf("your not are eligible");

    return 0;
}

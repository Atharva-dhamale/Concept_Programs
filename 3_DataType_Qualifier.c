#include<stdio.h>
int main()
{
    int age=22;
    const int birthDate=30;

    age=23;
    birthDate=31;

    printf("%d\n%d\n",age,birthDate);

    return 0;
}
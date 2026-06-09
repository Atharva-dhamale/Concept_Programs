#include<stdio.h>
int main()
{
    int Arr[]={10,20,30,40,50};
    int Brr[3];

    Brr[1]=60;
    Brr[2]=70;
    Brr[0]=80;

    for(int i=0;i<sizeof(Arr)/sizeof(Arr[0]);i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");

    for(int i=0;i<sizeof(Brr)/sizeof(Brr[0]);i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");


    return 0;
}
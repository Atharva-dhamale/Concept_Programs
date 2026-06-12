#include<stdio.h>
int main()
{
    int no=21;
    int *p=&no;
    int **q=&p;
    int ***a=&q;
    int ****b=&a;

    printf("%d\n",no);
    printf("%d\n",&no);
    printf("%d\n",sizeof(no));
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n",**q);
    printf("%d\n",**a);
    printf("%d\n",***a);
    printf("%d\n",&a);
    printf("%d\n",&q);
    printf("%d\n",sizeof(b));
    printf("%d\n",****b);
    printf("%d\n",***b);
    printf("%d\n",&(*p));
    printf("%d\n",&(**b));
    printf("%d\n",sizeof(**a));
    printf("%d\n",&(*p));

    return 0;
}
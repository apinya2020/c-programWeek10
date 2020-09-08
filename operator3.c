/*
    Program:Assignment Operator
    Authority:Mr.Chuchart Saetiew
    Date:08/09/2020
*/
#include<stdio.h>
int operator3(){
    int a = 5,c;

    c = a;
    printf("c = %d\n",c);
    c += a;
    printf("c = %d\n",c)
    c -= a;
    printf("c = %d\n",c);
    c *= a;
    printf("c = %d\n",c);
    c /= a;
    printf("c = %d\n",c);
    c %= a;
    printf("c = %d\n",c);
    return 0;
}

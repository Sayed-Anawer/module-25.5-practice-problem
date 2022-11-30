// You are given 3 integers a, b and c . Now print the sum of three numbers using the concept of pointer in C.

#include<stdio.h>
int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int *p,*q,*r;
    p = &a;
    q = &b;
    r = &c;
    int sum;
    sum = *p+*q+*r;
    printf("%d\n",sum);
    return 0;
}
// You are given an integer n . Now print the sum of first n natural numbers.
// For example n=5 , that means sum of first n natural number is 15(1+2+3+4+5) . Implement it using recursion.

#include<stdio.h>

int sumOfN(int n){
    if(n==1) return 1;
    else return n+sumOfN(n-1);
}
int main(){

    int n;
    scanf("%d",&n);
    printf("%d\n",sumOfN(n));
    return 0;
}
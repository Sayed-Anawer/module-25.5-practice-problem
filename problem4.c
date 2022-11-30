// You are given an integer n . Now print n to 1 . Implement it using recursion.

#include<stdio.h>

int recursion(int n){
    if(n==1) return 1;
    else {
        printf("%d ",n);
        return recursion(n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",recursion(n));
    return 0;
}
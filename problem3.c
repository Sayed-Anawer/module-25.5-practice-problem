// You are given a string S of small letters , Now calculate the cost of the string and tell that whether the cost of
// the string is a power of two or not.
// In this problem cost means the sum of the alphabetic order of the given string. Alphabetic order means
// a = 1 , b = 2 , c = 3 .......... z = 26
// And, power of two is a number of the form 2^n (2 to the power n) where n is an integer.
// Now ,If the cost is a power of two print YES with cost (in this format 2^n) otherwise print NO.
// Implement it using function.

#include<stdio.h>
#include<string.h>
#include<math.h>

void myFunc(char n[]){
    int len =strlen(n);
   
    int sum=0;
    for(int i=0;i<len;i++){
      sum+=(n[i]-97)+1 ;
    }

    double num1,num2;
    num1 = ceil(log2(sum));
    num2 = floor(log2(sum));

    if(num1==num2) printf("YES");
    else printf("NO");
}
int main(){

    char n[1000];
    scanf("%s",n);
    myFunc(n);
    return 0;
}
#include<stdio.h>
int main(){
    long long int t;
    scanf("%lld",&t);
    while(t>0){
        long long int n;
        scanf("%lld",&n);
        if(n==1) printf("1\n");
        else{
            for(int i=0;i<n;i++){
                printf("%d \n",i+2);
            }
        }
        t--;
    }
    return 0;
}
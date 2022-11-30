// You are given a positive integer n. The second line will contain n positive integers. The third line will contain a value k.
// Now print the total count of strictly less and strictly greater value from k. Implement it using function.
// Note – In the given input, there may exist duplicate value.

#include<stdio.h>
int counting(int n, int arr[n],int k){
int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            count++;
        }
        if(arr[i]>k){
            count++;
        }
    }
    return count;
}
int main(){
    int n,k;
    int arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    
    printf("%d\n",counting(n,arr,k));

    return 0;

}
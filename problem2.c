// Write a C program to take one positive integer N, the size of an array as input. Then take a positive integer array
// of size N . And the next line will contain k . Now find the k-th largest and kth-smallest element from the array.
// Implement it using function. And try to implement it using 3 functions .1st one is for sorting , second one for
// finding k-th largest element and third one for finding the kth- smallest element.
// See the sample output for more clarification.
// Note – 1<=k<=N

#include <stdio.h>
void findingLargestAndSmallest(int n, int arr[n],int k){
        for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
printf("%dth largest element %d\n",k,arr[n-k]);
printf("%dth smallest element %d\n",k,arr[k-1]);

}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }
    scanf("%d",&k);
   findingLargestAndSmallest(n,arr,k);
    return 0;
}
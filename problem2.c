// bubble sort in c

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
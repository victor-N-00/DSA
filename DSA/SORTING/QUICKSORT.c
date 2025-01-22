#include <stdio.h>
int process(int *arr,int lb,int ub);
void quicksort(int *arr,int lb,int ub){
    if(lb<ub){
        int loc=process(arr,lb,ub);
        quicksort(arr,lb,loc-1);
        quicksort(arr,loc+1,ub);
    }
}
int process(int *arr,int lb,int ub){
    int start=lb;
    int end=ub;
    int pivot= arr[lb];
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
        int t=arr[lb];
        arr[lb]=arr[end];
        arr[end]=t;
    return end;
}
int main(){
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
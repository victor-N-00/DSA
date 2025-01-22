#include "stdio.h"
void seclectionsort(int *arr,int n){
    int min=0;
   for(int i=0;i<n-1;i++){
    min=i;
     for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
     }
       int temp=arr[i];
       arr[i]=arr[min];
       arr[min]=temp;
   }
}

int main(){
    int n;
    printf("enter the size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }
    seclectionsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
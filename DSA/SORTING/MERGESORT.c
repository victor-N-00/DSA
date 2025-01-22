#include "stdio.h"
int merge(int *arr,int l,int r,int m);
void mergesort(int *arr,int L,int R){
    
    if(L<R){
        int m=(L+R)/2;
        mergesort(arr,L,m);
        mergesort(arr,m+1,R);
        merge(arr,L,R,m);
    }
}
int merge(int *arr,int l,int r,int m){
    int sl=m-l+1;
    int sr=r-m;
    int larr[sl],rarr[sr];
    for(int i=0;i<sl;i++){
        larr[i]=arr[l+i];
    }
    for(int j=0;j<sr;j++){
        rarr[j]=arr[m+j+1];
    }
    int i=0,j=0,k=l;
    while(i<sl&&j<sr){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;
            k++;
        }else{
            arr[k]=rarr[j];
            j++;
            k++;
        }
    }

    while(i<sl){
        arr[k]=larr[i];
        i++;
        k++;
    }
    while(j<sr){
        arr[k]=rarr[j];
        j++;
        k++;
    }
}
int main(){
    int n; 
    printf("sizeof of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("%d ELEMENT:",i+1);
        scanf("%d",&arr[i]);
    }
    int l=0,r=n-1;
    mergesort(arr,l,r);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}
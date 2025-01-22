#include "stdio.h"
void merge(int *arr,int l,int m,int r){
    int s1=m-l+1;
    int s2=r-m;
    int L[s1],R[s2];
    for(int i=0;i<s1;i++){
        L[i]=arr[l+i];
    }
    for(int i=0;i<s2;i++){
        R[i]=arr[m+i+1];
    }
    int i=0,j=0,k=l;
    while(i<s1&&j<s2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;k++;
        }else{
            arr[k]=R[j];
            j++;k++;
        }
    }
    while(i<s1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<s2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void sort(int *arr,int l,int r){
    if(l<r){
        int m=(l+r)/2;
        sort(arr,l,m);
        sort(arr,m+1,r);
        merge(arr,l,m,r);
    }

}
int binarysearch(int *arr,int l,int h,int x){
    if(l<=h){
        int m=(l+h)/2;
        if(arr[m]==x){
            return m;
        }
        if(arr[m]>x){
            return binarysearch(arr,l,m-1,x);
        }
        if(arr[m]<x){
            return binarysearch(arr,m+1,h,x);
        }

    }
    return -1;
}
int main(){
    int s;
    printf("ENTER SIZE:");
    scanf("%d",&s);
    int A[s];
    for(int i=0;i<s;i++){
    printf("%d ELEMENT: ",i+1);
    scanf("%d",&A[i]);
    }
    sort(A,0,s-1);
    int l=0;
    printf("ENTER NUMBER TO SEARCH in SORTED ARRAY:\n");
    scanf("%d",&l);
    int res=binarysearch(A,0,s-1,l);
    if(res==-1){
    printf("DATA NOT FOUND!");
    }else printf("DATA FOUND ON %d INDEX!",res);
}
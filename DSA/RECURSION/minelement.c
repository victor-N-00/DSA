#include <stdio.h>

int min(int *arr,int lb,int l){
    if(lb==l-1){
     return arr[lb];
    }
    int mini= min(arr,lb+1,l);
    if(arr[lb]<mini){
     return arr[lb];
    }else {  
     return mini;
    }
}

int main(){
    int n;
    printf("size:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    int res=min(arr,0,n);
    printf("\n%d is min",res);
}
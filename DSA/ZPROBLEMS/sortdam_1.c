#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d ELEMENT:",i+1);
        scanf("%d",arr+i);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("SORTED ARRAY:\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    free(arr);
    return 0;
}
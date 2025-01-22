#include <stdio.h>
int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("entry for %d element: ",i);
        scanf("%d",&arr[i]);
    }
 printf("your input :\n");
  
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
for(int i=0;i<n;i++){
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
          int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

printf("\n");
int j=0,arr1[n];
for(int i=0;i<n;i++){
    if(i==0||arr[i]!=arr[i-1]){
        arr1[j++]=arr[i];
    }
}
printf("out put:\n");
for(int i=0;i<j;i++){
    printf("%d ",arr1[i]);
}

return 0;
}
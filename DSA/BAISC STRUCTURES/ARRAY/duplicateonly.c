#include <stdio.h>

void sort(int*arr,int s){
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n,j=0;
    printf("ENTER SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        printf("ENTER %d ELEMENT:",i+1);
        scanf("%d",&arr[i]);
    }

  sort(arr,n);

  for(int i=1;i<n;i++){
    if(arr[i]==arr[i-1]){
        arr1[j]=arr[i];
        j++;
    }
  }
   if(j>0){
  for(int i=0;i<j;i++){
    printf("%d\t",arr1[i]);
    }
   }
   else printf("%d",-1);
 
   return 0;
}

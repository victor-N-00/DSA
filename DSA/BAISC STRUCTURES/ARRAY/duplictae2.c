#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   int n,j=0;
   printf("ENTER SIZE OF ARRAY:");
   scanf("%d",&n);
   int arr1[n];
   int arr2[n];
   for(int i=0;i<n;i++){
    printf("EMTER %d ELEMENT:",i+1);
    scanf("%d",&arr1[i]);
   }

   for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr1[j]>arr1[j+1]){
            int temp=arr1[j];
            arr1[j]=arr1[j+1];
            arr1[j+1]=temp;
        }
     }
   }

   for(int i=0;i<n;i++){
    if(i<n-1){
        if(arr1[i]!=arr1[i+1]){
            arr2[j]=arr1[i];
            j++;
        }
    }else{
            arr2[j]=arr1[i];
            j++;
        }
   }

   for(int i=0;i<j;i++){
    printf("%d\t",arr2[i]);
   }
}

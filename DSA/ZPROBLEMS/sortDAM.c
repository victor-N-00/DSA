#include <stdio.h>
#include <stdlib.h>

int main(){
    int s,j=0;
    printf("ENTER SIZE OFF ARRAY:");
    scanf("%d",&s);
    
    int *arr=malloc(sizeof(int)*s);
    for(int i=0;i<s;i++){
        printf("ENTER %d ELEMENT:",i+1);
        scanf("%d",arr+i);
    }
        printf("\nYOUR INPUT\n");
    for(int i=0;i<s;i++){
        printf("%d ",*(arr+i));
    }

    for(int i=0;i<s;i++){
        for(int j=0;j<s-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
  for(int i=0;i<s;i++){
    if(i==0||arr[i]!=arr[i-1]){
        j++;
    }
  }
  int *arr1=malloc(j*sizeof(int));
  j=0;
  for(int i=0;i<s;i++){
    if(i==0||arr[i]!=arr[i-1]){
        arr1[j++]=arr[i];
    }
  }
   printf("\n\nOUTPUT\n");
   for(int i=0;i<j;i++){
    printf("%d ",*(arr1+i));
   }

  free(arr);
  free(arr1);
  return 0;
}
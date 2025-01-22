#include <stdio.h>
void sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        int swap=0;
        for(int j=0;j<n-i-1;j++){
            int temp=arr[j];
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }

        if(swap==0){
            break;
        }
    }
}
int main(){
    int size;
    printf("size of your array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("your entry for %d element: ",i);
        scanf("%d",&array[i]);
    }
    sort(array,size);

for(int i=0;i<size;i++){
    printf("%d ",array[i]);
}
return 0;    
}
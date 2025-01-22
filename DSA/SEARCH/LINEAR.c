#include "stdio.h"

int linearsearch(int *arr,int x,int n){
   int found=0,i;
   for( i=0;i<n;i++){
    if(arr[i]==x){
        found=i;
        break;
    }
   }
   if(i==n){
    found=0;
   }
   return found;
}
int main(){
    int s;
    printf("ENTER SIZE:");
    scanf("%d",&s);
    int A[s];
    for(int i=0;i<s;i++){
        printf("ELEMENT %d:",i+1);
        scanf("%d",&A[i]);
    }
    int num;
    printf("NUMBER TO SEARCH:");
    scanf("%d",&num);
    int res=linearsearch(A,num,s);
    if(res==0){
        printf("DATA NOT FOUND!");
    }
    else printf("DATA FOUND IN INDEX %d",res);
}
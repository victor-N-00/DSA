#include <stdio.h>
int check(int n,int arr[],char a){
    int sum1=0,sum2=0;

    if(a=='b'){
        for(int i=0;i<n;i=i+2){
            sum1+=arr[i];
        }
        return sum1;
    }if(a=='g'){
        for(int i=1;i<n;i=i+2){
            sum2+=arr[i];
        }return sum2;
    }
    return 0;
}
int main(){
    int n;
    char gender;
    printf("size of classroom: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("marks: ");
        scanf("%d",&arr[i]);
    }
    while (getchar()!= '\n');
    
    printf("\nenter gender: \n");
    scanf("%c",&gender);
    int l=check(n,arr,gender);
    printf("%d is marks ",l);
    return 0;
}
#include "stdio.h"
int fibonacci(int n){
if(n<=1){
    return n;
}
else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
   int n;
   printf("which number of fibonacci:");
   scanf("%d",&n);
  int res=fibonacci(n);
  printf("%d is %dth number",res,n);
}
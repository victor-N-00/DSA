#include<stdio.h>
#include <stdlib.h>

int trace(int **p,int k,int l){
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=*(*(p+i)+i);
    }
    return sum;
}

int main(){
    int row,col;
    printf("Enter no.of rows and collums: ");
    scanf("%d%d",&row,&col);
    int **r=malloc(row*sizeof(int*));
    for(int i=0;i<row;i++){
        r[i]=malloc(col*sizeof(int));
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d%d Element:",i+1,j+1);
            scanf("%d",&r[i][j]);
        }
    }
  int result=trace(r,row,col);

   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d\t",r[i][j]);
            
        }printf("\n");
    }


    printf("\nTRACE:%d",result);

  for(int i=0;i<row;i++){
    free(r[i]);
  }
  free(r);
  return 0;
}
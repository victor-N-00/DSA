#include <stdio.h>
#include <stdlib.h>

int main(){
    int r,c;
    printf("Rows and Collums:");
    scanf("%d%d",&r,&c);
    int **p=calloc(r,sizeof(int*));
    for(int i=0;i<r;i++){
        p[i]=calloc(c,sizeof(int));
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d%d Element:",i+1,j+1);
            scanf("%d",*(p+i)+j);
        }
    }
     printf("\nDISPLAY MATRIX\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",*(*(p+i)+j));
        }printf("\n");
    }
      printf("\nROTATED MATRIX\n");
      for(int i=c-1;i>=0;i--){
        for(int j=0;j<c;j++){
            printf("%d\t",p[j][i]);// p[j][i]
        }printf("\n");
    }
   
   for(int i=0;i<r;i++){
    free(p[i]);
   }
   free(p);
   return 0;
}
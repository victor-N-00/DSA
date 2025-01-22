#include<stdio.h>
#include <stdlib.h>
int main(){
    int r,c;
    printf("Rows and Colllums:");
    scanf("%d%d",&r,&c);
    int **p=malloc(r*sizeof(int*));
    for(int i=0;i<r;i++){
        p[i]=malloc(c*sizeof(int));
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("element %d%d:",i+1,j+1);
            scanf("%d",&p[i][j]);
        }
    }


    
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",p[i][j]);
        }printf("\n");
    }
for(int i=0;i<r;i++){
    free(p[i]);
}
free(p);
    return 0;
}
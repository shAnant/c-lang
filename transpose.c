#include<stdio.h>
int main(){
    int mat1[3][3],mat2[3][3];
    printf("enter elements of matrix 1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter element (%d,%d): ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat2[i][j]=mat1[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }
}
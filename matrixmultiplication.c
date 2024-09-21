#include<stdio.h>
int main(){
    int mat1[3][3],mat2[3][3],mat3[3][3];
    printf("enter elements of matrix 1\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter element (%d,%d): ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("enter elements of matrix 2\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter element (%d,%d): ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mat3[i][j]=0;
            for(int k=0;k<3;k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}


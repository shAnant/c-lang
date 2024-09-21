 #include<stdio.h>
// int main(){
//     int mat1[10][10],sparsemat[10][10],r,c,nz=0;
//     printf("enter number of rows:- ");
//     scanf("%d",&r);
//     printf("enter number of column:- ");
//     scanf("%d",&c);
//     printf("enter elements of matrix 1\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             printf("enter element (%d,%d): ",i,j);
//             scanf("%d",&mat1[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<nz;j++){
//             if(mat1[i][j]==0){
//                 nz+=1;
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<nz;j++){
//             if(mat1[i][j]!=0){
//                 sparsemat[0][j]=i;
//                 sparsemat[1][j]=j;
//                 sparsemat[3][j]=mat1[i][j];
//             }
//         }
//     }
//     printf("sparse matrix:- \n");
//     for(int i=0;i<3;i++){
//         for(int j=0;j<nz;j++){
//             printf("%d ",mat1[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main(){
    int spmat[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int num;
            printf("enter element of index (%d,%d):",i,j);
            scanf("%d",&num);
            if(num!=0){
                spmat[0][j]=i;
                spmat[1][j]=j;
                spmat[2][j]=num;
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",spmat[i][j]);
        }
        printf("\n");
    }
}

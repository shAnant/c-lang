#include<stdio.h>
int main(){
    int arr1[100],arr2[100],x,y;
    printf("enter numer of elements of array 1:");
    scanf("%d",&x);
    printf("enter numer of elements of array 2:");
    scanf("%d",&y);
    printf("enter elements of array 1\n");
    for(int i=0;i<x;i++){
        printf("enter element of index %d: ",i);
        scanf("%d",arr1[i]);
    }
    printf("enter elements of array 2\n");
    for(int i=0;i<y;i++){
        printf("enter element of index %d: ",i);
        scanf("%d",arr1[i]);
    }
    for(int i=x,j=0;i<y,j<y;i++,j++){
        arr1[i]=arr2[j];
    }
    for(int i=0;i<x+y;i++){
        printf("%d ",arr1[i]);
    }
    return 0;
}
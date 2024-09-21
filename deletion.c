#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter element number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int m,u;
    printf("enter the element you want to delete: ");
    scanf("%d",&m);
    printf("enter the index:");
    scanf("%d",&u);
    if(sizeof(arr)==100){
        printf("array is overflow");
    }
    for(int i=u;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
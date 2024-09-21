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
    printf("enter the new element: ");
    scanf("%d",&m);
    printf("enter the index:");
    scanf("%d",&u);
    if(sizeof(arr)==100){
        printf("stack is overflow");
    }
    for(int i=n+1;i>=u;i--){
        arr[i+1]=arr[i];
    }
    arr[u]=m;
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
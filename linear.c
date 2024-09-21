#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter element number of index %d: ",i);
        scanf("%d",&arr[i]);
    }
    int m;
    printf("enter the target element: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            printf("%d founded at index %d",arr[i],i);
            break;
        }
    }
    return 0;
}
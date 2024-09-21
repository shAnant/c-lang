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
    int first=0,mid,last=n;
    mid=(first+last)/2;
    while(first<=last){
        if(arr[mid]<m){
            first=mid;
            mid=(first+last)/2;
        }
        else if(arr[mid]==m){
            printf("%d founded at index %d",arr[mid],mid);
            break;
        }
        else if(arr[mid]>m){
            last=mid;
            mid=(first+last)/2;
            }
    }
    if(last<first){
        printf("element not found");
    }
    return 0;
}
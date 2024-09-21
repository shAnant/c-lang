#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter rotation:" );
    scanf("%d",&x);
    int rot=x%n;
    for(int i=0;i<rot;i++){
        int temp=arr[n-1];
        for(int j=n-1;j>=0;j--){
            arr[j]=arr[j-1];
            
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
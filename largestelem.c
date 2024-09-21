#include<stdio.h>
int main(){
    int arr[100],n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter element of index %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("largest element of the array is: %d\n",max);
    int secmax=arr[0];
    for(int j=1;j<n;j++){
        if(arr[j]>secmax && arr[j] != max){
            secmax=arr[j];
        }
    }
    printf("second largest element of the array is: %d",secmax);
}
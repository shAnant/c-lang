#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int prime=0;
        for(int j=0;j<n;j++){
            int flag=0;
        for(int k=2;k<(j/2)+1;k++){
            if(arr[j]%k==0){
                flag=1;
                break;
            }
        }   
            if(flag==0 && arr[j]>arr[i] && arr[i]!=arr[j]){
                prime++;    
            }
        }
        printf("%d ",prime);
    }
    return 0;
}
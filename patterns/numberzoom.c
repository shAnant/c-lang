#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            i<j?printf("%d ",n-i):printf("%d ",n-j);
        }
        printf("\n");
    }
    return 0;
}
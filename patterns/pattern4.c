#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-1-i;j++){
            printf("  ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
}
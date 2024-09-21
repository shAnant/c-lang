#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=N;i++){
        int flag=0,k=0;
        for(int j=0;j<N;j++){
            if(i!=arr[j]){
                flag++;
                k=j;
            }
        }
        if(flag==N){
            printf("%d\n",i);
            printf("%d",arr[k]);
        }
    }
    return 0;
}

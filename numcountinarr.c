#include<stdio.h>
int main(){
    int arr[100],n,count=0;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter element of index %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the element for counting: ");
    scanf("%d",&x);
    for(int j=0;j<n;j++){
        if(x==arr[j]){
            count+=1;
        }
    }
    printf("%d occurs %d times",x,count);
    return 0;
}
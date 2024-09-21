#include<stdio.h>
int main(){
    int num,bin=0;
    printf("enter a decimal number: ");
    scanf("%d",&num);
    while(num>0){
        int temp=num%2;
        bin=bin*10+temp;
        num=num/2;
    }
    printf("%d",bin);
    return 0;
}
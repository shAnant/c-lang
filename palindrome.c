#include<stdio.h>
int main(){
    int num,rev=0;
    printf("enter a number:");
    scanf("%d",&num);
    int x=num;
    while(x>0){
        int rem=x%10;
        x/=10;
        rev=rev*10+rem;
    }
    if(rev==num){
        printf("%d is a palindrome",num);
    }
    else if(rev!=num){
        printf("%d is not a palindrome",num);
    }
    return 0;
}
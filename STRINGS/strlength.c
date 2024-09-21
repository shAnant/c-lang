#include<stdio.h>
#include<string.h>
int strlength(char* str);

int main(){
    char str[100];
    printf("enter a string:");
    scanf("%s",&str);
    int len=strlength(str);
    printf("%d",len);
    return 0;
}
int strlength(char* str){
    int count=0,i;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}
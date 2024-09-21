#include<stdio.h>
#include<string.h>
void rev(char* str);
int main(){
    char str1[100];
    printf("enter a string:");
    scanf("%[^\n]s",&str1);
    printf("%s\n",str1);
    rev(str1);
    printf("%s",str1);
    return 0;
}
void rev(char* str){
    int i=0,j=strlen(str)-1;
    char temp;
    while(i<j){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++,j--;
    }
}
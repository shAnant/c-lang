#include<stdio.h>
#include<string.h>
void rev(char* str);
int main(){
    char str1[100],str2[100];
    printf("enter a word:");
    scanf("%s",&str1);
    strcpy(str2,str1);
    rev(str2);
    if(strcmp(str1,str2)==0){
        printf("string is palindrome");
    }
    else{
        printf("string is not a palindrome");
    }
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
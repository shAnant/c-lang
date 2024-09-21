#include<stdio.h>
#include<string.h>
void concat(char* str1,char* str2);
int main(){
    char str1[200],str2[100];
    printf("enter word 1:");
    scanf("%s",&str1);
    printf("enter word 2:");
    scanf("%s",&str2);
    concat(str1,str2);
    printf("%s",str1);
}
void concat(char* str1,char* str2){
    int len=strlen(str1)+1+strlen(str2),len1=strlen(str1)+1;
    str1[strlen(str1)]=' ';
    for(int i=len1;i<=len;i++){
        str1[i]=str2[i-len1];
    }
}
#include<stdio.h>
#define max 10
int stk[10];
int top=-1;
void push(int x);
void pop(int x);
// int main(){
//     int stk[10],top=-1,n;
//     printf("enter number of elements: ");
//     scanf("%d",&n);
    // for(int i=0;i<n;i++){           
    //     if(top==9){
    //         printf("stack is overflow");
    //         brea
    //     }
    //     printf("enter element:");
    //     scanf("%d",&stk[i]);
    //     top++;
        
    // }
//     int i=0;
//     while(1){
//         printf("enter element:");
//         scanf("%d",&stk[i]);
//         if(top==8){
//             printf("stack is overflow");
//             break;
//         }
//         top++;
//         i++;
//     }
//}
int main(){
    int stk[10],top=-1,x=0;
    push(stk);in
    while(1){
        
    }
}
void push(int x){
    int x=0,top=-1;
    if(top==max-1){
        printf("stack is overflow");
    }
    top++;
    stk[top]=x;
}
void pop(int x){
    if(top==-1){
        printf("stack is underflow");
    }
    int a=stk[top];
    top--;
    
}
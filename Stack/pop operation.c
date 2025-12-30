#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
int main(){
    int n;
    printf("enter number of elements (max %d): ",MAX);
    scanf("%d",&n);
    if(n>MAX){
        printf("stack overflow! too many elemnts\n");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&stack[i]);
        top++;
    }
    if(top==-1){
        printf("stack underflow! no element to pop\n");
    }else{
        printf("\npopped element: %d\n",stack[top]);
        top--;
    }
    printf("\nstack after pop:\n");
    if(top==-1){
        printf("stack is empty\n");
    }else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
    return 0;
}

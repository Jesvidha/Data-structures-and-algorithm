#include<stdio.h>
#include<string.h>
int validparantheses(char s[]){
    int count=0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='{'){
            count++;
        }
        else if(s[i]=='}'){
            count--;
        }
        if(count<0){
            return 0;
        }
    }
    return count==0;
}
int main(){
    char s[100];
    printf("enter parantheses string:");
    scanf("%s",s);
    if(validparantheses(s)){
        printf("valid parantheses\n");
    }else{
        printf("invalid parantheses\n");
    }
    return 0;
}

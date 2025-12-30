#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
int main(){
    int n,value;
    printf("enter number of elements to enqueue: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     struct node *newnode=malloc(sizeof(struct node));
     scanf("%d",&value);
     newnode->data=value;
    newnode->next=NULL;
    if(rear==NULL){
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    }
    printf("\nqueue stored using linked list:\n");
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}

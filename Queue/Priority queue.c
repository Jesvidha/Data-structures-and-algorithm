#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};
struct node *front=NULL;
void enqueue(int data,int priority){
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->priority=priority;
    newnode->next=NULL;
    if(front==NULL||priority<front->priority){
      newnode->next=front;
      front=newnode;
    }
    else{
        struct node *temp=front;
        while(temp->next!=NULL && temp->next->priority<=priority){
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void display(){
    if(front==NULL){
        printf("queue is empty!\n");
        return;
    }
    struct node *temp=front;
    printf("priority queue: ");
    while(temp!=NULL){
        printf("(%d, p=%d)",temp->data,temp->priority);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    int n,data,priority;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter value: ");
        scanf("%d",&data);
        printf("enter priority: ");
        scanf("%d",&priority);
        enqueue(data,priority);
    }
    display();
    return 0;
}

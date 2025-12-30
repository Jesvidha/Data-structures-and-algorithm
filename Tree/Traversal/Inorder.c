#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int value){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node* createtree(){
    int value;
    printf("enter node value (-1 for no node): ");
    scanf("%d",&value);
    if(value==-1)
    return NULL;
    struct node* root=createnode(value);
    printf("enter left child of %d\n",value);
    root->left=createtree();
    printf("enter right child of %d\n",value);
    root->right=createtree();
    return root;
}
void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
int main(){
    struct node* root;
    printf("create binary tree\n");
    root=createtree();
    printf("\ninoreder traversal: ");
    inorder(root);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int value)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insert(struct node *root,int value)
{
    if(root==NULL)
    {
        return createnode(value);
    }
    if(value<root->data)
       root->left=insert(root->left, value);
    else if(value > root->data)
       root->right=insert(root->right,value);
    return root;
}
struct node *createtree()
{
    int value;
    printf("enter node value (-1 for no node):");
    scanf("%d",&value);
    if(value==-1)
        return NULL;
    struct node *root=createnode(value);
    printf("enter left child of %d\n",value);
    root->left=createtree();
    printf("enter right child of %d\n",value);
    root->right=createtree();
    return root;
}
void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
int main()
{
    struct node *root;
    printf("create binary tree\n");
    root=createtree();
    printf("\n postorder traversal:");
    postorder(root);
    return 0;
}

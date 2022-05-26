#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count=0;
struct Tree
{
    int data;
    struct Tree * left;
    struct Tree * right;
};

typedef struct Tree BST;
BST * delete_from_bst(BST*);
BST * insert_into_bst(BST *);
void search_from_bst(BST *);
void inorder(BST *root);
BST* insert_into_bst(BST *root)
{
    BST *n=(BST *)malloc(sizeof(BST));
    if(n==NULL)
    {
        printf("Error !! Memory is not allocated");
        return root;
    }
    printf("Enter the data\n");
    scanf("%d",&n->data);
    n->left=NULL;
    n->right=NULL;

    if(root==NULL)
    {
        printf("Root Created\n");
        return n;
    }
    BST *cur=root,*parent=NULL;
    while(cur!=NULL)
    {
        parent=cur;
        if(n->data < cur->data)
         cur=cur->left;
        else
         cur=cur->right;
    }
    if(n->data < parent->data)
     parent->left=n;
    else
     parent->right=n;
    return root;
}

void inorder(BST* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\n",root->data);
        inorder(root->right);
    }
}

void preorder(BST* root)
{
    if(root!=NULL)
    {
        printf("%d\n",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(BST* root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\n",root->data);
    }
}

BST * delete_from_bst(BST * root)
{
    if(root==NULL)
    {
        printf("Tree is Empty\n");
        return root;
    }
    BST *cur,*parent,*p,*succ;
    parent=NULL;
    cur=root;
    int data;
    printf("Enter the data to be deleted\n");
    scanf("%d",&data);
    while(cur!=NULL && cur->data!=data)
    {
        parent=cur;
        if(data < cur->data)
         cur=cur->left;
        else
         cur=cur->right;
    }
    if(cur==NULL)
    {
        printf("Item not found\n");
        return root;
    }
    if(cur->left==NULL)
     p=cur->right;
    else if(cur->right==NULL)
     p=cur->left;
    else
    {
        succ=cur->right;
        while(succ->left!=NULL)
         succ=succ->left;
        succ->left=cur->left;
        p=cur->right;
    }
    if(parent==NULL)
    {
        printf("Deleted %d \n",cur->data);
        free(cur);
        return p;
    }
    if(cur==parent->left)
     parent->left=p;
    else
     parent->right=p;
    printf("Deleted %d \n",cur->data);
    free(cur);
    return root;
}

void Indegree(BST *root)
{
    printf("In Degree of root= 0\n");
}

int Outdegree(BST *root)
{
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return 0;
    else if(root->left!=NULL && root->right!=NULL)
        return 2;
    else
        return 1;
}

void address(BST *root)
{
    if(root==NULL)
        printf("Tree is Empty\n");
    else
        printf("Address of root =%d",&root);
}

void no_of_edges(BST *root)
{
   if(root!=NULL)
    {
        no_of_edges(root->left);
        count++;
        no_of_edges(root->right);
    }
}

void leaf(BST* root)
{
    if(root!=NULL)
    {
        leaf(root->left);
        if(root->left == root->right)
        {
                printf("%d\n",root->data);
                count++;
        }
        leaf(root->right);
    }
}

int level1(BST *root)
{
    if(root->left==root->right)
        return 0;
    else if(root->left!=NULL && root->right!=NULL)
        return 2;
    else
        return 1;
}

void search_from_bst(BST *root)
{
    if(root ==NULL)
    {
        printf("Tree is Empty\n");
        return;
    }
    BST *n=root;
    int data;
    printf("Enter the Search Element\n");
    scanf("%d",&data);
    while(n!=NULL && n->data!=data)
    {
        if(data < n->data)
         n=n->right;
        else
         n=n->left;
    }
    if(n==NULL)
    {
        printf("Item Not Found\n");
        return;
    }
    printf("Item Found in the Tree\n");
}

int search_count_from_bst(BST *root)
{
    if(root ==NULL)
    {
        printf("Tree is Empty\n");
        return 0;
    }
    BST *n=root;
    int data;
    printf("Enter the Search Element\n");
    scanf("%d",&data);
    int i=1;
    while(n!=NULL && n->data!=data)
    {
        i++;
        if(data < n->data)
         n=n->left;
        else
         n=n->right;
    }
    if(n==NULL)
    {
        printf("Item Not Found\n");
        return i-1;
    }
    printf("Item Found in the Tree\n");
    return i;
}

int main()
{
    BST *root=NULL;
    int c;
    while(1)
    {
        printf("\nEnter\n1 for Insertion\n2 for Deletion\n3 for Searching\n4 for In order display \n5 for preorder display\n6 for postorder display\n7 for Exit\n");
        scanf("%d",&c);
        switch (c)
        {
            case 1: root=insert_into_bst(root);
                    break;
            case 2: root=delete_from_bst(root);
                    break;
            case 8: search_from_bst(root);
                    break;
            case 3: inorder(root);
                    break;
            case 4: preorder(root);
                    break;
            case 5: postorder(root);
                    break;
            case 6: Indegree(root);
                    break;
            case 7: printf("Out Degree of Root is =%d\n",Outdegree(root));
                    break;
            case 9: count =0;
                    if(root==NULL)
                        printf("Tree is Empty \n No. of edges =0\n");
                    else
                    {
                        no_of_edges(root);
                        printf("No. of Edges = %d",count-1);
                    }
                    break;
            case 15: address(root);
                     break;
            case 16: if(root==NULL)
                        printf("Tree is Empty so Count=0\n");
                     else
                     {
                         printf("Count = %d\n",level1(root));
                     }
                     break;
            case 18: count=0;
                     if(root==NULL)
                        printf("Tree is Empty so Count=0\n");
                     else
                     {
                         printf("\nLeaf nodes are\n");
                         leaf(root);
                         printf("\nCount =%d\n",count);
                     }
                     break;
            case 21: printf("Comparisions made = %d",search_count_from_bst(root));
                     break;
            case 20: free(root);
                     exit(0);
                     break;
            default: printf("Invalid Input\n");
                     break;
        }
    }
    return 0;
}

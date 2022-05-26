#include <stdio.h>
#include <stdlib.h>
/*

           D
          / \
         /   \
        /     \
       A       F
      / \
     /   \
    E     B
*/

struct node
{
    char data; //node will store character
    struct node *right_child; // right child
    struct node *left_child; // left child
};

struct node* new_node(char data)
{
    struct node *p; // node
    p = malloc(sizeof(struct node)); // allocating space to p
    p->data = data; // assinging data to p
    p->left_child = NULL; // making children NULL
    p->right_child = NULL;

    return(p); // returning the newly made node
}

void preorder(struct node *root)
{
    if(root!=NULL) // checking if the root is not null
    {
        printf(" %c ", root->data); // printing data at root
        preorder(root->left_child); // visiting left child
        preorder(root->right_child); // visiting right child
    }
}

void postorder(struct node *root)
{
    if(root!=NULL) // checking if the root is not null
    {
        postorder(root->left_child); // visiting left child
        postorder(root->right_child); // visiting right child
        printf(" %c ", root->data); // printing data at root
    }
}

void inorder(struct node *root)
{
    if(root!=NULL) // checking if the root is not null
    {
        inorder(root->left_child); // visiting left child
        printf(" %c ", root->data); // printing data at root
        inorder(root->right_child);// visiting right child
    }
}

int is_leaf(struct node *a)
{
    if(a->right_child==NULL && a->left_child==NULL)
        return 1;
    return 0;
}

// function to return maximum of two numbers
int get_max(int a, int b)
{
    return (a>b) ? a : b;
}

//function to get the height of a tree or node
int get_height(struct node *a)
{
    if(a==NULL || is_leaf(a)) // height will be 0 if the node is leaf or null
        return 0;
    //height of a node will be 1+ greater among height of right subtree and height of left subtree
    return(get_max(get_height(a->left_child), get_height(a->right_child)) + 1);
}

int main()
{
    struct node *root; //new structure
    root = new_node('D'); // making a new node

    root->left_child = new_node('A'); //left child of root


    root->right_child = new_node('F'); //right child of root


    root->left_child->left_child = new_node('E'); // new node



    root->left_child->right_child = new_node('B'); // new node



    preorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    inorder(root);
    printf("\n");

    printf("%d\n", get_height(root));

    return 0;
}

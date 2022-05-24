/*
 * C Program to search an element in a Binary Search Tree recursively;
 */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *left, *right;
};
struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}
int search(struct node *head, int key)
{
    while (head != NULL)
    {
        if (key > head->info)
        {
            return search(head->right, key);
        }
        else if (key < head->info)
        {
            return search(head->left, key);
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int flag = 0;
    /* Creating first Tree. */
    struct node *newnode = createnode(25);
    newnode->left = createnode(17);
    newnode->right = createnode(35);
    newnode->left->left = createnode(13);
    newnode->left->right = createnode(19);
    newnode->right->left = createnode(27);
    newnode->right->right = createnode(55);
    /* Sample Tree 1:
     *               25
     *             /    \
     *            17     35
     *           / \     / \
     *         13  19   27 55
     */
    flag = search(newnode,15);
    if (flag)
    {
        printf("Key %d found in tree 1 \n", 15);
    }
    else
    {
        printf("Key %d not found in tree 1\n", 15);
    }
    struct node *node = createnode(1);
    node->right = createnode(2);
    node->right->right = createnode(3);
    node->right->right->right = createnode(4);
    node->right->right->right->right = createnode(5);
    /* Sample Tree 2:   Right Skewed Tree (Unbalanced).
     *               1
     *                \
     *                 2
     *                  \
     *                   3
     *                    \
     *                     4
     *                      \
     *                       5
     */
    flag = search(node,4);
    if (flag)
    {
        printf("Key %d found in tree 2\n", 4);
    }
    else
    {
        printf("Key %d not found in tree 2\n", 4);
    }
    struct node *root = createnode(15);
    /* Sample Tree 3- Tree having just one root node.
     *              15
     */
    flag = search(root,15);
    if (flag)
    {
        printf("Key %d found in tree 3 \n", 15);
    }
    else
    {
       	printf("Key %d not found in tree 3\n", 15);
    }
    return 0;
}

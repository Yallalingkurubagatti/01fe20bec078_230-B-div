/* C Program for finding the sum of all the nodes in a Tree */
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
int sumofnodes(struct node *root)
{
    int rightsubtree, leftsubtree, sum = 0;
    if(root != NULL)
    {
        leftsubtree = sumofnodes(root->left);
        rightsubtree = sumofnodes(root->right);
        sum = (root->info) + leftsubtree + rightsubtree;
        return sum;
    }
}
/*
* Main Function
*/
int main()
{
   /* Creating first Tree. */
    struct node *newnode = createnode(25);
    newnode->left = createnode(27);
    newnode->right = createnode(19);
    newnode->left->left = createnode(17);
    newnode->left->right = createnode(91);
    newnode->right->left = createnode(13);
    newnode->right->right = createnode(55);
    /* Sample Tree 1:
     *                25
     *             /    \
     *            27     19
     *           / \     / \
     *         17  91   13 55
     */
    printf("Sum of nodes in tree 1 = %d", sumofnodes(newnode));
    printf("\n");

    /* Creating second Tree. */
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
    printf("Sum of nodes in tree 2 = %d", sumofnodes(node));
    printf("\n");

    /* Creating third Tree. */
    struct node *root = createnode(15);
    /* Sample Tree 3: Tree having just one root node.
     *              15
     */
    printf("Sum of nodes in tree 3 = %d", sumofnodes(root));
    printf("\n");
    return 0;
}

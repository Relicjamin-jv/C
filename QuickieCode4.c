#include<stdlib.h>
#include<stdio.h>

struct bin_tree {
char * data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node ** tree, char * val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->data)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->data)
    {
        insert(&(*tree)->right, val);
    }

}


void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%s\n",tree->data);
        print_inorder(tree->right);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}



void main()
{
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, "Char");
    insert(&root, "Hhar");
    insert(&root, "Ahar");
    insert(&root, "Rhar");
    insert(&root, "Ahar");
    insert(&root, "Char");
    insert(&root, "Thar");


    printf("In Order Display\n");
    print_inorder(root);

    
    /* Deleting all nodes of tree */
    deltree(root);
}
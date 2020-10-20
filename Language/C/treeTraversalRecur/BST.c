#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;


void insert(Node** root,int item){

    if(*root == NULL)
    {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = item;
        new_node->left = NULL;
        new_node->right = NULL;
        *root = new_node;
        return;
    }


    if((*root)->data < item)
        insert(&(*root)->right,item);
    else
        insert(&(*root)->left,item);

}


Node* succ(Node* root)
{
    while(root->left != NULL) root = root->left;
    return root;
}

Node* Delete(Node *root, int data) {

    if(root == NULL){
        printf("Node %d is not found in the tree",data);
        exit(0);
    }
    else if(data < root->data) root->left = Delete(root->left,data);
    else if (data > root->data) root->right = Delete(root->right,data);

    else {

        if(root->left == NULL && root->right == NULL) { 
            free(root);
            root = NULL;
        }

        else if(root->left == NULL) {
            Node *temp = root;
            root = root->right;
            free(temp);
        }
        else if(root->right == NULL) {
            Node *temp = root;
            root = root->left;
            free(temp);
        }

        else { 
            struct Node *temp = succ(root->right);
            root->data = temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }
    return root;
}



void inOrder(Node* root)
{
    if(root == NULL)
        return;
    
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

void preOrder(Node* root)
{
    if(root == NULL)
        return;
    
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);

}


int main()
{
    int N=0,a;
    Node* root=NULL;

    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a);
        insert(&root,a);
    }

    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        if(root == NULL)
        {
            printf("root is null");
            break;
        }
        scanf("%d",&a);
       root = Delete(root,a);
    }

    inOrder(root);
    printf("\n");
    preOrder(root);

}
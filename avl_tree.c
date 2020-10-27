// AVL tree implementation in C

#include<stdio.h>
#include<stdlib.h>

struct Node
{
  int key;
  struct Node *left;
  struct Node *right;
  int height;
};

int max(int a, int b);

int height(struct Node *N)
{
  if (N == NULL)
    return 0;
  return N->height;
}

int max(int a, int b)
{
  return (a > b)? a : b;
}

struct Node* newNode(int key)
{
  struct Node* node = (struct Node*)
            malloc(sizeof(struct Node));
  node->key = key;
  node->left = NULL;
  node->right = NULL;
  node->height = 1;
  return(node);
}

struct Node *rightRotate(struct Node *y)                       //Right Rotation
{
  struct Node *x = y->left;
  struct Node *T2 = x->right;

  x->right = y;
  y->left = T2;

  y->height = max(height(y->left), height(y->right))+1;
  x->height = max(height(x->left), height(x->right))+1;

  return x;
}

struct Node *leftRotate(struct Node *x)                      //Left Rotation
{
  struct Node *y = x->right;
  struct Node *T2 = y->left;

  y->left = x;
  x->right = T2;

  x->height = max(height(x->left), height(x->right))+1;
  y->height = max(height(y->left), height(y->right))+1;

  return y;
}

int getBalanceFactor(struct Node *N)
{
  if (N == NULL)
    return 0;
  return height(N->left) - height(N->right);
}

struct Node* insertNode(struct Node* node, int key)
{
  if (node == NULL)
    return(newNode(key));

  if (key < node->key)
    node->left = insertNode(node->left, key);
  else if (key > node->key)
    node->right = insertNode(node->right, key);
  else
    return node;

  node->height = 1 + max(height(node->left),
            height(node->right));

  int balanceFactor = getBalanceFactor(node);

  if (balanceFactor > 1)
  {
    if (key < node->left->key)
    {
      return rightRotate(node);
    }
    else if (key > node->left->key)
    {
      node->left = leftRotate(node->left);
      return rightRotate(node);
    }
  }
  if (balanceFactor < -1)
  {
    if (key > node->right->key)
    {
      return leftRotate(node);
    }
    else if (key < node->right->key)
    {
      node->left = rightRotate(node->left);
      return leftRotate(node);
    }
  }

  // if (balance > 1 && key < node->left->key)
  //   return rightRotate(node);

  // if (balance < -1 && key > node->right->key)
  //   return leftRotate(node);

  // if (balance > 1 && key > node->left->key)
  // {
  //   node->left = leftRotate(node->left);
  //   return rightRotate(node);
  // }

  // if (balance < -1 && key < node->right->key)
  // {
  //   node->right = rightRotate(node->right);
  //   return leftRotate(node);
  // }

  return node;
}

struct Node * minValueNode(struct Node* node)
{
  struct Node* current = node;

  while (current->left != NULL)
    current = current->left;

  return current;
}

struct Node* deleteNode(struct Node* root, int key)
{

  if (root == NULL)
    return root;

  if ( key < root->key )
    root->left = deleteNode(root->left, key);

  else if( key > root->key )
    root->right = deleteNode(root->right, key);

  else
  {
    if( (root->left == NULL) || (root->right == NULL) )
    {
      struct Node *temp = root->left ? root->left :
                      root->right;

      if (temp == NULL)
      {
        temp = root;
        root = NULL;
      }
      else
      *root = *temp;

      free(temp);
    }
    else
    {
      struct Node* temp = minValueNode(root->right);

      root->key = temp->key;

      root->right = deleteNode(root->right, temp->key);
    }
  }

  if (root == NULL)
  return root;

  root->height = 1 + max(height(root->left),
            height(root->right));

  int balanceFactor = getBalanceFactor(root);

  if (balanceFactor > 1)
  {
    if (getBalanceFactor(root->left) >= 0)
    {
      return rightRotate(root);
    }
    else
    {
      root->left = leftRotate(root->left);
      return rightRotate(root);
    }
  }

  if (balanceFactor < -1)
  {
    if (getBalanceFactor(root->right) <= 0)
    {
      return leftRotate(root);
    }
    else
    {
      root->right = rightRotate(root->right);
      return leftRotate(root);
    }
  }

  // if (balance > 1 && getBalance(root->left) >= 0)
  //   return rightRotate(root);

  // if (balance > 1 && getBalance(root->left) < 0)
  // {
  //   root->left = leftRotate(root->left);
  //   return rightRotate(root);
  // }

  // if (balance < -1 && getBalance(root->right) <= 0)
  //   return leftRotate(root);

  // // Right Left Case
  // if (balance < -1 && getBalance(root->right) > 0)
  // {
  //   root->right = rightRotate(root->right);
  //   return leftRotate(root);
  // }

  return root;
}

void printPreOrder(struct Node *root)
{
  if(root != NULL)
  {
    printf("%d ", root->key);
    printPreOrder(root->left);
    printPreOrder(root->right);
  }
}

int main()
{
  struct Node *root = NULL;
  int ch,n,key;
  while(1)
  {
    printf("\n**********MENU***********\n1.Insert\n2.Delete\n3.Preorder Traverse\n4.exit\n");
    printf("\n\t Enter choice");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: printf("\n\t Enter element to insert: ");
              scanf("%d",&n);
              root=insertNode(root,n);
              break;
      case 2: printf("\n\t Enter node to delete: ");
              scanf("%d",&key);
              root=deleteNode(root, key);
              break;
      case 3: printPreOrder(root);
              break;
      case 4: printf("\n\t Exiting-----");
              exit(0);
              break;
      default:printf("\n\t Enter valid choice");
              break;
    }
  }
  return 0;
}

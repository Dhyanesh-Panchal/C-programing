#include <iostream>
#include "Queue.cpp"

using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
} *root1;

Node *Insert(Node *root, int key)
{
    Node *NewNode = new Node;
    NewNode->data = key;
    NewNode->lchild = NewNode->rchild = NULL;
    if (root == NULL)
    {
        root = NewNode;
        return root;
    }
    Node *prev = root, *t = root;
    while (t)
    {
        prev = t;
        if (key < t->data)
        {
            t = t->lchild;
        }
        else if (key > t->data)
        {
            t = t->rchild;
        }
        else
        {
            return root;
        }
    }

    if (key > prev->data)
    {
        prev->rchild = NewNode;
    }
    else
    {
        prev->lchild = NewNode;
    }
    return root;
}

void InOrdertraversal(Node *root)
{
    if (root)
    {
        InOrdertraversal(root->lchild);
        cout << root->data << " ";
        InOrdertraversal(root->rchild);
    }
}

void PreOrderTraversal(Node *root)
{
    if (root)
    {
        cout << root->data << " ";
        PreOrderTraversal(root->lchild);
        PreOrderTraversal(root->rchild);
    }
}
void PostOrderTraversal(Node *root)
{
    if (root)
    {
        PostOrderTraversal(root->lchild);
        PostOrderTraversal(root->rchild);
        cout << root->data << " ";
    }
}

int main()
{
    cout << "Enter the length:";
    int size;
    cin >> size;
    int ele;

    cout << "Enter the values:";
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        root1 = Insert(root1, ele);
    }
    cout << "The tree is Created.\nInorder Traversal: ";
    InOrdertraversal(root1);
    cout << "\nPreorder Traversal: ";
    PreOrderTraversal(root1);
    cout << "\nPostorder Traversal: ";
    PostOrderTraversal(root1);

    return 0;
}
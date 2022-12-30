#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    int height;
    Node *lchild;
    Node *rchild;
} *root1;

int NodeHeight(Node *p)
{
    int hl, hr;
    // get height of left and right sub tree
    hl = (p != NULL && p->lchild != NULL) ? (p->lchild->height + 1) : (1);
    hr = (p != NULL && p->rchild != NULL) ? (p->rchild->height + 1) : (1);
    return max(hl, hr);
}

int BalanceFactor(Node *p)
{
    return NodeHeight(p->lchild) - NodeHeight(p->rchild);
}

Node *LL_Rotation(Node *p)
{
    Node *temp = p->lchild->rchild;
    Node *newRoot = p->lchild;
    newRoot->rchild = p;
    p->lchild = temp;
    p->height = NodeHeight(p);
    newRoot->height = NodeHeight(newRoot);

    if (p == root1)
        root1 = newRoot;
    return newRoot;
}
Node *LR_Rotation(Node *p)
{
    return NULL;
}
Node *RL_Rotation(Node *p)
{
    return NULL;
}
Node *RR_Rotation(Node *p)
{
    return NULL;
}

Node *Insert(Node *root, int key)
{
    Node *t = NULL;
    if (root == NULL)
    {
        t = new Node;
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < root->data)
    {
        root->height++;
        root->lchild = Insert(root->lchild, key);
    }
    else if (key > root->data)
    {
        root->rchild = Insert(root->rchild, key);
    }
    // updating the root height
    root->height = NodeHeight(root);

    // Rotation
    if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == 1)
    {
        return LL_Rotation(root);
    }
    else if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == -1)
    {
        return LR_Rotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == 1)
    {
        return RL_Rotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == -1)
    {
        return RR_Rotation(root);
    }
    return root;
}

int main()
{
    root1 = Insert(root1, 10);
    Insert(root1, 5);
    Insert(root1, 2);
    cout << root1->data;

    return 0;
}
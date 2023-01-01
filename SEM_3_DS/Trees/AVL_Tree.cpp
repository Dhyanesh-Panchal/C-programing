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
    int hl;
    int hr;
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;
    return hl - hr;
}

Node *LL_Rotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    // Update height
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    // Update root
    if (root1 == p)
    {
        root1 = pl;
    }
    return pl;
}
Node *LR_Rotation(Node *p)
{
    Node *pl = p->lchild;
    Node *plr = pl->rchild;
    pl->rchild = plr->lchild;
    p->rchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);
    plr->height = NodeHeight(plr);

    // Update root
    if (root1 == p)
    {
        root1 = plr;
    }
    return plr;
}
Node *RL_Rotation(Node *p)
{
    Node *pr = p->rchild;
    Node *prl = pr->lchild;
    pr->lchild = prl->rchild;
    p->lchild = prl->lchild;
    prl->rchild = pr;
    prl->lchild = p;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);
    prl->height = NodeHeight(prl);

    // Update root
    if (root1 == p)
    {
        root1 = prl;
    }
    return prl;
}
Node *RR_Rotation(Node *p)
{
    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;

    // Update height
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);

    // Update root
    if (root1 == p)
    {
        root1 = pr;
    }
    return pr;
}

Node *Insert(Node *root, int key)
{
    Node *t;
    if (root == NULL)
    {
        t = new Node;
        t->data = key;
        t->lchild = NULL;
        t->rchild = NULL;
        t->height = 1; // Starting height from 1 onwards instead of 0
        return t;
    }

    if (key < root->data)
    {
        root->lchild = Insert(root->lchild, key);
    }
    else if (key > root->data)
    {
        root->rchild = Insert(root->rchild, key);
    }

    // Update height
    root->height = NodeHeight(root);

    // Balance Factor and Rotation
    if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == 1)
    {
        return LL_Rotation(root);
    }
    else if (BalanceFactor(root) == 2 && BalanceFactor(root->lchild) == -1)
    {
        return LR_Rotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == -1)
    {
        return RR_Rotation(root);
    }
    else if (BalanceFactor(root) == -2 && BalanceFactor(root->rchild) == 1)
    {
        return RL_Rotation(root);
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

    cout << "Enter the values for AVL Tree:";
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        root1 = Insert(root1, ele);
    }
    cout << "The AVL tree is Created.\nInorder Traversal: ";
    InOrdertraversal(root1);
    cout << "\nPreorder Traversal: ";
    PreOrderTraversal(root1);
    cout << "\nPostorder Traversal: ";
    PostOrderTraversal(root1);

    return 0;
}
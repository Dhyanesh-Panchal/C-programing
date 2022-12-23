#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct CircularList
{
    Node *first;
    Node *last;
} l1;

void Display(CircularList l)
{
    if (l.first == NULL)
    {
        cout << "List is Empty\n";
        return;
    }
    Node *t = l.first;
    cout << t->data << " ";
    while (t != l.last)
    {
        t = t->next;
        cout << t->data << " ";
    }
    cout << "\n";
    return;
}

void Insert_First(CircularList *l, int ele)
{
    Node *NewNode = new Node;
    NewNode->data = ele;
    NewNode->next = NULL;
    if (l->first == NULL)
    {
        l->first = NewNode;
        l->last = NewNode;
        NewNode->next = NewNode;
        return;
    }

    NewNode->next = l->first->next;
    l->first = NewNode;
    l->last->next = l->first;
    return;
}

void Insert_After(CircularList *l, int ele, int indx)
{
    Node *NewNode = new Node;
    NewNode->data = ele;
    NewNode->next = NULL;
    if (l->first == NULL)
    {
        cout << "List is empty, element is inserted at 1st position.\n";
        Insert_First(l, ele);
        return;
    }
    Node *t = l->first;
    for (int i = 0; i < indx; i++)
    {
        t = t->next;
        if (t == l->first)
        {
            cout << "Index out of range, Unable to insert element.\n";
            return;
        }
    }

    NewNode->next = t->next;
    t->next = NewNode;
    if (t == l->last)
    {
        l->last = NewNode;
    }
    return;
}

void Delete_First(CircularList *l)
{
    if (l->first == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    l->first = l->first->next;
    delete l->last->next;
    l->last->next = l->first;
    return;
}

void Delete_After(CircularList *l, int indx)
{
    if (l->first == NULL)
    {
        cout << "List is empty\n";
        return;
    }
    Node *t1 = l->first->next, *t2 = l->first;
    for (int i = 0; i < indx; i++)
    {
        t2 = t1;
        t1 = t1->next;
        if (t1 == l->first)
        {

            cout << "Index out of range.\n";
            return;
        }
    }
    t2->next = t1->next;
    if (t1 == l->last)
    {
        l->last = t2;
    }
    delete t1;
    return;
}

main()
{
    l1.first = NULL;
    l1.last = NULL;
    Display(l1);
    Insert_First(&l1, 10);
    Display(l1);
    Insert_First(&l1, 20);
    Display(l1);
    Insert_After(&l1, 30, 0);
    Display(l1);
    Insert_After(&l1, 40, 2);
    Display(l1);
    Delete_After(&l1, 3);
    Display(l1);
    return 0;
}
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
    int selector;
    int ele, indx;

    while (1)
    {
        cout << "\nEnter number to select the functionality:\n1.Insert at front\n2.Insert after position\n3.Delete First\n4.Delete After Given index\n5.Display\n6.exit";
        cin >> selector;
        switch (selector)
        {
        case 1:
            cout << "Enter the element:";
            cin >> ele;
            Insert_First(&l1, ele);
            cout << "Inserted!\n";
            continue;

        case 2:
            cout << "Enter the element and index after which element is inserted:";
            cin >> ele >> indx;
            Insert_After(&l1, ele, indx);
            cout << "Inserted!\n";
            continue;

        case 3:
            Delete_First(&l1);
            continue;

        case 4:
            cout << "Enter the index:";
            cin >> indx;
            Delete_After(&l1, indx);
            continue;

        case 5:
            Display(l1);
            continue;

        case 6:
            break;
            // return 0;

        default:
            continue;
        }
        return 0;
    }
    return 0;
}
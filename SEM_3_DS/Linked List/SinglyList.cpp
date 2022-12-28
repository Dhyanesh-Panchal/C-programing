#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

Node *Insert(Node *head, int ele, int indx)
{
    Node *element = new Node;
    element->data = ele;
    element->next = NULL;
    if (head == NULL)
    {
        head = element;
        return head;
    }
    if (indx == 0)
    {
        element->next = head;
        head = element;
        return head;
    }

    Node *temp = head;
    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    element->next = temp->next;
    temp->next = element;
    return head;
}

bool IsSort(Node *head)
{
    Node *p = head;
    if (p == NULL)
    {
        return 1;
    }
    while (p->next != NULL)
    {
        if (p->data > p->next->data)
        {
            return 0;
        }
        p = p->next;
    }

    return 1;
}

Node *InsertSort(Node *head, int ele)
{
    Node *newNode = new Node;
    newNode->data = ele;
    newNode->next = NULL;
    if (IsSort(head))
    {
        Node *p = head;
        if (head == NULL)
        {
            head = Insert(head, ele, 0);
            return head;
        }
        else if (ele < p->data)
        {
            head = Insert(head, ele, 0);
            return head;
        }
        while (p->next != NULL && p->next->data < ele)
        {
            p = p->next;
        }
        newNode->next = p->next;
        p->next = newNode;
        return head;
    }
    else
    {
        cout << "List is not sorted\n";
        return head;
    }
}
Node *Delete(Node *head, int indx)
{

    if (indx == 0)
    {
        Node *temp = head;
        head = (head)->next;
        delete temp;
        return head;
    }

    Node *t1, *t2 = head;
    for (int i = 0; i < indx; i++)
    {
        t1 = t2;
        t2 = t2->next;
    }
    t1->next = t2->next;
    delete t2;
    return head;
}

int main()
{
    Node *List1 = NULL;

    int selector;
    int ele, indx;

    while (1)
    {
        cout << "\nEnter number to select the functionality:\n1.Insert at front\n2.Insert at given index\n3.Insert Sorted\n4.Delete First\n5.Delete given index\n6.Display list\n7.exit";
        cin >> selector;
        switch (selector)
        {
        case 1:
            cout << "Enter the element:";
            cin >> ele;
            List1 = Insert(List1, ele, 0);
            cout << "Inserted!\n";
            continue;

        case 2:
            cout << "Enter the element and insertion index:";
            cin >> ele >> indx;
            List1 = Insert(List1, ele, indx);
            cout << "Inserted!\n";
            continue;

        case 3:
            cout << "Enter the element:";
            cin >> ele;
            List1 = InsertSort(List1, ele);
            cout << "Inserted!\n";
            continue;

        case 4:
            List1 = Delete(List1, 0);
            cout << "Deleted Front element!\n";
            continue;

        case 5:
            cout << "Enter the deletion index:";
            cin >> indx;
            List1 = Delete(List1, indx);
            cout << "Deleted!\n";
            continue;

        case 6:
            Display(List1);
            continue;

        case 7:
            break;

        default:
            continue;
        }
    }
    return 0;
}
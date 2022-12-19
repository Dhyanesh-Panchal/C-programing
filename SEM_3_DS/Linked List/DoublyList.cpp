#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *prev, *next;
};

Node *InsertFront(Node *head, int ele)
{
    Node *newNode = new Node;
    newNode->prev = NULL;
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        head->prev = newNode;
        newNode->next = head;
        return newNode;
    }
}
Node *InsertLast(Node *head, int ele)
{
    Node *newNode = new Node;
    newNode->prev = NULL;
    newNode->data = ele;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
        return head;
    }
}

void Display(Node *head)
{
    if (head == NULL)
    {
        cout << "The List is Empty\n";
        return;
    }
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *DeleteLast(Node *head)
{
    if (head == NULL)
    {
        cout << "List is empty";
        return head;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
    return head;
}

int Count(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

Node *Delete(Node *head, int indx)
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return head;
    }
    if (Count(head) < indx || indx == 0)
    {
        cout << "Unable to delete at that index" << endl;
        return head;
    }
    Node *temp = head;
    if (indx == 1)
    {
        head = head->next;
        delete temp;
        head->prev = NULL;
        return head;
    }
    for (int i = 0; i < indx - 2; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete temp->next->prev;
    temp->next->prev = temp;
    return head;
}

int main()
{

    Node *List1 = NULL;
    int selector;
    int ele, indx;

    while (1)
    {
        cout << "\nEnter number to select the functionality:\n1.Insert at front\n2.Insert at end\n3.Delete Last\n4.Delete before Given index\n5.Display\n6.exit";
        cin >> selector;
        switch (selector)
        {
        case 1:
            cout << "Enter the element:";
            cin >> ele;
            List1 = InsertFront(List1, ele);
            cout << "Inserted!\n";
            continue;

        case 2:
            cout << "Enter the element:";
            cin >> ele;
            List1 = InsertLast(List1, ele);
            cout << "Inserted!\n";
            continue;

        case 3:
            List1 = DeleteLast(List1);
            cout << "Deleted the last element!\n";
            continue;

        case 4:
            cout << "Enter the index:";
            cin >> indx;
            List1 = Delete(List1, indx);
            cout << "Deleted!\n";
            continue;

        case 5:
            Display(List1);
            continue;

        case 6:
            break;

        default:
            continue;
        }
        return 0;
    }
}
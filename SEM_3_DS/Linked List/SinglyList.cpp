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

void Insert(Node **head, int ele, int indx)
{
    Node *element = new Node;
    element->data = ele;
    element->next = NULL;
    if (*head == NULL)
    {
        *head = element;
        return;
    }
    if (indx == 0)
    {
        element->next = *head;
        *head = element;
        return;
    }

    Node *temp = *head;
    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    element->next = temp->next;
    temp->next = element;
}

void Delete(Node **head, int indx)
{

    if (indx == 0)
    {
        Node *temp = *head;
        *head = (*head)->next;
        delete temp;
        return;
    }

    Node *t1, *t2 = *head;
    for (int i = 0; i < indx; i++)
    {
        t1 = t2;
        t2 = t2->next;
    }
    t1->next = t2->next;
    delete t2;
}

int main()
{
    Node *List1 = NULL;
    Insert(&List1, 10, 0);
    Display(List1);
    Insert(&List1, 20, 1);
    Display(List1);
    Insert(&List1, 30, 2);
    Display(List1);
    Delete(&List1, 2);
    Display(List1);

    return 0;
}
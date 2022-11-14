#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} * initializer;

Node *CreateList(int ele)
{
    initializer = new Node;
    initializer->data = ele;
    initializer->next = NULL;

    return initializer;
}

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

void Insert(Node *head, int ele, int indx)
{
    Node *element = new Node;
    element->data = ele;
    element->next = NULL;
    if (indx == 0)
    {
        element->data = head->data;
        element->next = head->next;
        head->data = ele;
        head->next = element;
        // *******************Not working  - to solve use head as global variable **********
        // element->next = head;
        // head = element;
        return;
    }

    Node *temp = head;
    for (int i = 0; i < indx - 1; i++)
    {
        temp = temp->next;
    }
    element->next = temp->next;
    temp->next = element;
}

int main()
{
    Node *l1 = CreateList(10);
    Display(l1);
    // Insert(l1, 10, 0);
    Insert(l1, 20, 1);
    Display(l1);
    Insert(l1, 30, 2);
    Display(l1);
    Insert(l1, 100, 0);
    Display(l1);

    return 0;
}
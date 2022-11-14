#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *CreateList(int ele)
{

    Node *initializer = new Node;
    initializer->data = ele;
    initializer->next = NULL;

    return initializer;
}
Node *head = CreateList(10);

void Display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void Insert(int ele, int indx)
{
    Node *element = new Node;
    element->data = ele;
    element->next = NULL;
    if (indx == 0)
    {
        // element->data = head->data;
        // element->next = head->next;
        // head->data = ele;
        // head->next = element;
        // *******************working  - to solve use head as global variable **********
        element->next = head;
        head = element;
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

void Delete(int indx)
{

    if (indx < 2)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *t1, *t2 = head;
    for (int i = 0; i < indx - 1; i++)
    {
        t1 = t2;
        t2 = t2->next;
    }
    t1->next = t2->next;
    delete t2;
}

int main()
{
    Display();
    // Insert(l1, 10, 0);
    Insert(20, 1);
    Display();
    Insert(30, 2);
    Display();
    Insert(100, 0);
    Display();
    Delete(3);
    Display();

    return 0;
}
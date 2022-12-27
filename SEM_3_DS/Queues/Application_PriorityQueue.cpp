#include <iostream>
using namespace std;

struct Node
{
    string data;
    int priority;
    Node *next;
};

struct PQueue
{
    Node *front;
    Node *rear;
} q1;

void Insert(PQueue *q, string ele, int myPriority)
{
    Node *NewNode = new Node;
    if (NewNode == NULL)
    {
        cout << "Stack is Full";
        return;
    }
    NewNode->data = ele;
    NewNode->priority = myPriority;
    NewNode->next = NULL;
    if (q->front == NULL)
    {
        q->front = NewNode;
        q->rear = NewNode;
        return;
    }
    else if (q->front->next == NULL)
    {
        if (q->front->priority >= myPriority)
        {
            q->front->next = NewNode;
            return;
        }
        NewNode->next = q->front;
        q->front = NewNode;
        return;
    }
    Node *t = q->front;
    if (t->priority < myPriority)
    {
        NewNode->next = t;
        q->front = NewNode;
        return;
    }
    while (t->next != NULL && t->next->priority >= myPriority)
    {
        t = t->next;
    }
    NewNode->next = t->next;
    t->next = NewNode;
    if (t == q->rear)
    {
        q->rear = NewNode;
    }
    return;
}

string Delete(PQueue *q)
{
    if (q->front == NULL)
    {
        cout << "Queue is empty";
        return "";
    }
    Node *t = q->front;
    string ele = t->data;
    if (q->front == q->rear)
    {
        q->front = NULL;
        q->rear = NULL;
        delete t;
        return ele;
    }
    q->front = q->front->next;
    delete t;
    return ele;
}

void Display(PQueue q)
{
    if (q.front == NULL)
    {
        cout << "Queue is empty\n";
        return;
    }
    Node *t = q.front;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << '\n';
}

int main()
{
    string DiseaseList[4] = {"Cough", "High fever", "High Blood pressure", "Heart attack"};
    q1.front = NULL;
    q1.rear = NULL;

    int selector;
    string name;
    int priority;

    while (1)
    {
        cout << ("\n Enter index to select the functionality:\n1.Patient Entry\n2.Call patient from Queue\n3.Dispaly patient queue\n4.exit\n");
        cin >> selector;
        switch (selector)
        {
        case 1:
            cout << "Enter name:";
            cin >> name;
            cout << "Select disease:\n";
            for (int i = 0; i < 4; i++)
            {
                cout << i + 1 << ")" << DiseaseList[i] << "\n";
            }
            cin >> priority;
            Insert(&q1, name, priority);
            cout << "Patient Registered Succesfully" << endl;

            continue;
        case 2:
            cout << "Name: " << Delete(&q1) << endl;
            continue;
        case 3:
            Display(q1);
            continue;

        case 4:

            break;

        default:

            continue;
        }
        break;
    }

    return 0;
}
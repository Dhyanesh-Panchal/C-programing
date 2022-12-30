#include <iostream>

using namespace std;

struct QNode
{
    int data;
    QNode *next;
};

struct Queue
{
    QNode *front;
    QNode *rear;
} q1;

void QInsert(Queue *q, int ele)
{
    QNode *t = new QNode;
    if (t == NULL)
    {
        cout << "Stack is Full";
        return;
    }
    t->data = ele;
    t->next = NULL;
    if (q->front == NULL)
    {
        q->front = t;
        q->rear = t;
        return;
    }
    q->rear->next = t;
    q->rear = t;
}

int QDelete(Queue *q)
{
    if (q->front == NULL)
    {
        cout << "Queue is empty";
        return -1;
    }
    QNode *t = q->front;
    int ele = t->data;
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

void QDisplay(Queue q)
{
    if (q.front == NULL)
    {
        cout << "Queue is empty";
        return;
    }
    QNode *t = q.front;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
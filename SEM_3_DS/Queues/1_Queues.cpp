// Dhyanesh Panchal
// date-

// Topic

#include <iostream>
using namespace std;

struct Queue
{
    int rear, front;
    int *arr, size;
};

void Display(struct Queue q)
{
    if (q.front == q.rear)
    {
        cout << ("The queue is empty.");
        return;
    }
    for (int i = q.front + 1; i <= q.rear; i++)
    {
        cout << " " << q.arr[i];
    }
}

void Insert(struct Queue *q, int ele)
{
    if (q->rear == q->size - 1)
    {
        cout << ("The queue is full,unable to insert element");
        return;
    }
    q->rear++;
    q->arr[q->rear] = ele;
}

int Delete(struct Queue *q)
{
    int val;
    if (q->front == q->rear)
    {
        cout << ("The Queue is Empty");
        return -1;
    }
    q->front++;
    return q->arr[q->front];
}

int main()
{
    struct Queue q1;
    q1.rear = -1, q1.front = -1;
    cout << ("Enter the max size of Queue: ");
    cin >> q1.size;
    q1.arr = new int[sizeof(int)];

    int selector;
    int ele;

    while (1)
    {
        cout << ("\n Enter index to select the functionality:\n1.display\n2.Insert\n3.Delete\n4.exit");
        cin >> selector;
        switch (selector)
        {
        case 1:
            Display(q1);

            continue;
        case 2:

            cout << ("Enter the element:");
            cin >> ele;
            Insert(&q1, ele);

            continue;
        case 3:
            ele = Delete(&q1);
            if (ele == -1)
            {
                continue;
            }
            cout << "The deleted element is " << ele;
            continue;

        case 4:

            break;

        default:

            continue;
        }
        break;
    }
    delete q1.arr;

    return 0;
}
#include <iostream>
using namespace std;

struct Node
{
    int coeff;
    int exp;
    Node *next;
};

int main()
{
    Node *p1 = NULL, *p2 = NULL, *p3 = NULL;
    Node *t1 = p1, *t2 = p2, *t3;
    int ele;
    cout << "Enter the 1st equation";
    for (int i = 2; i >= 0; i--)
    {
        cout << "Coeff of x^" << i << ":";
        cin >> ele;
        Node *t = new Node;
        t->coeff = ele;
        t->exp = i;
        t->next = NULL;

        if (t1 == NULL)
        {
            p1 = t1 = t;
        }
        else
        {
            t1->next = t;
            t1 = t1->next;
        }
    }
    cout << "Enter the 2nd equation";
    for (int i = 2; i >= 0; i--)
    {
        cout << "Coeff of x^" << i << ":";
        cin >> ele;
        Node *t = new Node;
        t->coeff = ele;
        t->exp = i;
        t->next = NULL;

        if (t2 == NULL)
        {
            p2 = t2 = t;
        }
        else
        {
            t2->next = t;
            t2 = t2->next;
        }
    }
    t1 = p1, t2 = p2, t3 = p3;
    for (int i = 2; i >= 0; i--)
    {

        Node *t = new Node;
        t->coeff = t1->coeff + t2->coeff;
        t->exp = i;
        t->next = NULL;
        if (p3 == NULL)
        {
            p3 = t3 = t;
        }
        else
        {
            t3->next = t;
            t3 = t3->next;
        }
        t1 = t1->next;
        t2 = t2->next;
    }

    cout << "The sum of equations is: " << p3->coeff << "x^2 + " << p3->next->coeff << "x + " << p3->next->next->coeff;

    return 0;
}
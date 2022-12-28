#include <iostream>

using namespace std;

struct Stack
{
    int top;
    char arr[20];
};

void push(struct Stack *s1, int ele)
{
    if (s1->top + 1 == 20)
    {
        cout << ("Unble to insert element, stack is full");
        return;
    }
    s1->top++;
    s1->arr[s1->top] = ele;
}

char pop(struct Stack *s1)
{
    if (s1->top == -1)
    {
        cout << ("unable to pop,stack is alrady empty");
        return -1;
    }
    s1->top--;
    return s1->arr[(s1->top) + 1];
}

int main()
{
    Stack reverse;
    reverse.top = -1;

    string s;
    cout << "Enter the string you want to reverse:";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        push(&reverse, s[i]);
    }

    // printing the string
    cout << "The Reverse of the string is : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << pop(&reverse);
    }

    return 0;
}
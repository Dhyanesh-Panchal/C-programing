#include <iostream>

using namespace std;

void BubbleSort(int A[], int n)
{
    bool noChange = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                noChange = 0;
            }
        }
        if (noChange)
        {
            break;
        }
    }
}

int main()
{
    cout << "Enter the size:";
    int size;
    cin >> size;
    int a[size];
    cout << "Enter the Values:";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    BubbleSort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
#include <iostream>

using namespace std;

void Merge(int A[], int l, int mid, int h)
{
    int i = l, j = mid + 1, k = 0, B[h + 1];
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++, i++;
        }
        else
        {
            B[k] = A[j];
            k++, j++;
        }
    }
    for (; i <= mid; i++)
    {
        B[k] = A[i];
        k++;
    }
    for (; j <= h; j++)
    {
        B[k] = A[j];
        k++;
    }
    k = 0;
    for (int i = l; i <= h; i++)
    {
        A[i] = B[k];
        k++;
    }
}

void MergeSort(int A[], int l, int h)
{
    if (l < h)
    {
        int mid = (l + h) / 2;
        MergeSort(A, l, mid);
        MergeSort(A, mid + 1, h);
        Merge(A, l, mid, h);
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
    MergeSort(a, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
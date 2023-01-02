#include <iostream>
using namespace std;

int partition(int a[], int l, int h)
{
    int i = l, j = h;
    do
    {
        do
        {
            i++;
        } while (a[i] <= a[l]);
        do
        {
            j--;
        } while (a[j] > a[l]);

        if (i < j)
        {
            swap(a[i], a[j]);
        }
    } while (i < j);
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int a[], int l, int h)
{
    int key;
    if (l < h)
    {
        key = partition(a, l, h);
        QuickSort(a, l, key);
        QuickSort(a, key + 1, h);
    }
}

int main()
{
    cout << "Enter the size:";
    int size;
    cin >> size;
    int a[size + 1];
    a[size] = INT32_MAX;
    cout << "Enter the Values:";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    QuickSort(a, 0, size);
    cout << "The sorted List is: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
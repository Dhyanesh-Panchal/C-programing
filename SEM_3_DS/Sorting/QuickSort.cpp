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

void Quick_Sort(int a[], int l, int h)
{
    int key;
    if (l < h)
    {
        key = partition(a, l, h);
        Quick_Sort(a, l, key);
        Quick_Sort(a, key + 1, h);
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
    Quick_Sort(a, 0, size - 1);
    cout << "The sorted List is: ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
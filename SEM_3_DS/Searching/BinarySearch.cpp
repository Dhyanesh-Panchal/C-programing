#include <iostream>

using namespace std;
int BinarySearch(int *a, int n, int key)
{
    int LowLimit = 0, HighLimit = n;
    while (HighLimit >= LowLimit)
    {
        int Mid = ((HighLimit + LowLimit) / 2);
        if (a[Mid] == key)
        {
            return Mid;
        }
        else if (a[Mid] > key)
        {
            HighLimit = Mid - 1;
        }
        else
        {
            LowLimit = Mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter the searching element:";
    cin >> key;
    cout << "The element " << key << " is at " << BinarySearch(a, n, key) << "th indx";

    return 0;
}
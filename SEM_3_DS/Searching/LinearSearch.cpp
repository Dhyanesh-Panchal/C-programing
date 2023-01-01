#include <iostream>

using namespace std;
int LinearSearch(int *a, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
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
    cout << "The element " << key << " is at " << LinearSearch(a, n, key) << "th indx";

    return 0;
}
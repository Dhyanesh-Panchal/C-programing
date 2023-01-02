#include <iostream>
int SIZE;
using namespace std;

void Insert(int Hash[], int key)
{
    int indx = key % SIZE;

    while (Hash[indx] != 0)
    {
        indx = (indx + 1) % SIZE;
    }
    Hash[indx] = key;
}

int Search(int Hash[], int key)
{
    int indx = key % SIZE;
    while (Hash[indx] != 0 && Hash[indx] != key)
    {
        indx++;
    }
    if (Hash[indx] == 0)
        return -1;
    return indx;
}

int main()
{
    cout << "Enter size of Hash table:";
    cin >> SIZE;
    int Hash[SIZE] = {0};
    int n;
    cout << "Enter the size of input:";
    cin >> n;
    int ele;
    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        Insert(Hash, ele);
    }
    cout << "Enter the element you want to search:";
    cin >> ele;
    (Search(Hash, ele) == -1) ? (cout << "element not found") : (cout << "Element is at index: " << Search(Hash, ele));

    return 0;
}
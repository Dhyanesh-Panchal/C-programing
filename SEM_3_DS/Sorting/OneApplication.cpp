#include <iostream>
using namespace std;

struct Result
{
    string Name;
    int marks;
};

void BubbleSort(Result A[], int n)
{
    bool noChange = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j].marks > A[j + 1].marks)
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
    int n;
    cout << "Enter Numer of students:";
    cin >> n;
    Result r[n];
    cout << "Enter studnts Name and marks:";
    for (int i = 0; i < n; i++)
    {
        cin >> r[i].Name >> r[i].marks;
    }
    cout << "The Result is:\n";
    BubbleSort(r, n);
    for (int i = n - 1; i > -1; i--)
    {
        cout << r[i].Name << " : " << r[i].marks << endl;
    }

    return 0;
}
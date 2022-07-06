#include <iostream>

using namespace std;
int mod(int n)
{
    if (n > 0)
        return n + 1;
    return -n + 1;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (2 * n - 1); i++)
    {
        for (int j = 0; j < (2 * n - 1); j++)
        {
            if (i == j)
            {
                cout << mod(n - i - 1) << " ";
                continue;
            }
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
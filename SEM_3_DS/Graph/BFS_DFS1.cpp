#include <iostream>
using namespace std;

// Assuming size 20
int n, graph[20][20], check[20], q[20], qFront, qRear;

void create()
{
    int v1, v2;
    cout << "Enter the no. of Nodes: ";
    cin >> n;
    for (v1 = 0; v1 < n; v1++)
        for (v2 = 0; v2 < n; v2++)
            graph[v1][v2] = 0;
    cout << "Enter the no. edges you want to add:";
    int ne;
    cin >> ne;
    cout << "Enter the vertices of the respective edges\n ";
    while (ne--)
    {
        cin >> v1 >> v2;
        graph[v1][v2] = graph[v2][v1] = 1;
    }
    cout << "\n Created!";
}

void BFS(int sv)
{
    int v;
    check[sv] = 1;
    qFront = qRear = -1;
    qRear++;
    q[qRear] = sv;
    while (qFront != qRear && qRear <= n)
    {
        qFront++;
        sv = q[qFront];
        cout << sv << " ";
        for (v = 0; v < n; v++)
        {
            if (graph[sv][v] == 1 && check[v] == 0)
            {
                qRear++;
                q[qRear] = v;
                check[v] == 1;
            }
        }
    }
}
void DFS(int sv)
{
    int v;
    cout << sv << " ";
    check[sv] = 1;
    for (v = 0; v < n; v++)
    {
        if (graph[sv][v] == 1 && check[v] == 0)
        {
            q[++qRear] = v;
            DFS(v);
        }
    }
}

int main()
{
    int v1, v2;
    create();
    cout << "The adj. matrix : \n";
    for (v1 = 0; v1 < n; v1++)
    {
        for (v2 = 0; v2 < n; v2++)
        {
            cout << graph[v1][v2] << " ";
        }
        cout << endl;
    }
    for (v1 = 0; v1 < n; v1++)
        check[v1] = 0;
    cout << "Enter the verticx from which you want to traverse ";
    cin >> v1;
    if (v1 >= n)
    {
        cout << "Vertix Invalid";
        return 0;
    }

    cout << "BFS on v1 is:";
    BFS(v1);

    cout << "\n And DFS is: ";
    DFS(v1);
    return 0;
}
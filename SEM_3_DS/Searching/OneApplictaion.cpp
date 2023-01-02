#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    int sem;
    string city;

} s[5] = {{101, "Rohan", 3, "Ahmedabad"}, {102, "Ram", 3, "Gandhinagar"}, {103, "Parth", 3, "Rajkot"}, {104, "Rishi", 3, "Ahmedabad"}, {105, "Hari", 3, "Ahmedabad"}};
int main()
{
    cout << "Enter the id:";
    int id;
    cin >> id;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].id == id)
        {
            cout << "Id: " << s[i].id << "\nName: " << s[i].name << "\nSem: " << s[i].sem << "\nCity: " << s[i].city << endl;
        }
    }

    return 0;
}
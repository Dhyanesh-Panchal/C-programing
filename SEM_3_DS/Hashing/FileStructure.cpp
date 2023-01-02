#include <iostream>
using namespace std;

int main()
{
    FILE *ptr;
    ptr = fopen("myFile.txt", "r");
    char c;
    while (c != EOF)
    {
        c = fgetc(ptr);
        cout << c;
    }
    fclose(ptr);
    cout << "\nLets append some text in file.\n";
    ptr = fopen("myFile.txt", "a");
    fprintf(ptr, "\nThis text is appended by code.");
    fclose(ptr);
    ptr = fopen("myFile.txt", "r");
    c = 'x';
    while (c != EOF)
    {
        c = fgetc(ptr);
        cout << c;
    }
    fclose(ptr);

    return 0;
}
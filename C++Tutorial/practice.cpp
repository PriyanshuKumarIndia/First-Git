#include <iostream>
using namespace std;

int main()
{
    int row = 1, col = 1, n;
    cout << "Enter the number ";
    cin >> n;
    while (row <= n)
    {
        col = 1;
        while (col <= n)
        {
            cout << col << " ";
            col++;
        }
        row++;
        cout << endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

int Pow(int z, int b)
{
    if (b == 0)
        return 1;
    int t = Pow(z, b / 2);
    if (b % 2 == 0)
        return t * t;
    else
        return z * t * t;
}
int main()
{
    cout << "Priyanshu Kumar\t21BCS10429\n";
    int z;
    cout << "Enter number: ";
    cin >> z;
    int b;
    cout << "Enter power: ";
    cin >> b;
    cout << "Result: " << Pow(z, b);
    return 0;
}
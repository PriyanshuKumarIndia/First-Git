#include <bits/stdc++.h>
using namespace std;
int main()

{
    int num, size;
    cout << "Enter size of number ";
    cin >> size;
    cout << "Enter Number ";
    cin >> num;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int Narr[size];
    for (int i = 0; i < size; i++)
    {
        Narr[i] = num % 10;
        num = num / 10;
    }
    // int temp = 0;
    // for (int i = 0; i < size / 2; i++)
    // {
    //     temp = Narr[i];
    //     Narr[i] = Narr[size-i-1];
    //     Narr[size-i-1] = temp;
    // }
    for (int i = size-1; i >= 0; i--)
    {
        cout << arr[Narr[i]] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{

    if (n > 0)

    {
       
        print(n - 1);
         cout << n << endl;
    }
    // else
    // {
    //     cout<<endl;
    // }
}
int main()
{

    int n = 10;
    print(n);
}
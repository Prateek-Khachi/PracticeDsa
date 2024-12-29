#include <bits/stdc++.h>
using namespace std;

int minRats(int n)
{
    return ceil(log2(n));
}

int main()
{
    int n;
    cout<<"Enter Number Of Bottles To Test: ";
    cin>>n;

    cout << "Minimum " << minRats(n)
         << " rat(s) are required"
         << endl;

    return 0;
}
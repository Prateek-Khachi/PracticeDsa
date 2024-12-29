#include <bits/stdc++.h>
using namespace std;

int minRats(int n)
{
    return ceil(log2(n));
}

int main()
{
    int n = 1025;

    cout << "Minimum " << minRats(n)
         << " rat(s) are required"
         << endl;

    return 0;
}
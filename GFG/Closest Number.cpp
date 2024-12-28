//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int n, int m) {
        // code here
        
        int q = n/m;
        
        int n1 = m*q;
        
        int n2 = ( n*m ) > 0 ?  (m * (q+1)) : (m * (q-1));
        
        if ( abs(n - n1) < abs(n - n2)) return n1;
        
        return n2;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;

        cin >> N >> M;

        Solution ob;
        cout << ob.closestNumber(N, M) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends
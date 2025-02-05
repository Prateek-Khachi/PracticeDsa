class Solution
{
public:
    void solve(vector<string> &ans, int n, string s, int open, int close)
    {

        if (open == n && close == n)
        {
            ans.push_back(s);
            return;
        }

        if (open < n)
            solve(ans, n, s + "(", open + 1, close);

        if (close < open)
            solve(ans, n, s + ")", open, close + 1);
    }

    vector<string> generateParenthesis(int n)
    {

        vector<string> ans;
        solve(ans, n, "", 0, 0);
        return ans;
    }
};
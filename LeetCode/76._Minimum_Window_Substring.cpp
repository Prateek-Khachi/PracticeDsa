class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (t.size() > s.size())
        {
            return "";
        }

        vector<int> mp(128, 0);

        for (char c : t)
        {
            mp[c]++;
        }

        int count = t.size();
        int l = 0;
        int minLen = INT_MAX;
        int minLeft = 0;

        for (int r = 0; r < s.size(); r++)
        {

            if (mp[s[r]] > 0)
                count--;
            mp[s[r]]--;

            while (count == 0)
            {

                if (minLen > r - l + 1)
                {

                    minLen = r - l + 1;
                    minLeft = l;
                }

                if (mp[s[l]] >= 0)
                    count++;
                mp[s[l]]++;
                l++;
            }
        }

        if (minLen != INT_MAX)
        {
            return s.substr(minLeft, minLen);
        }
        else
        {
            return "";
        }
    }
};
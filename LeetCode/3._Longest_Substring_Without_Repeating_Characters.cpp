class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> st;
        int left =0;
        int res=0;

        for(int right=0; right<s.size();right++){
            
            while(st.find(s[right])!=st.end()){
                st.erase(s[left]);
                left++;
            }

            res = max(res, right-left+1);
            st.insert(s[right]);


        }

        return res;

    }
};
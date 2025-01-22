class Solution {
public:
    int characterReplacement(string s, int k) {
    
        unordered_map<char,int> mp;
        int left=0;
        int maxFreq=0;
        int res=INT_MIN;

        for(int r=0; r<s.size();r++){

            mp[s[r]]++;   

           maxFreq = max(maxFreq, mp[s[r]]);
            
            if( (r-left+1) - maxFreq > k){
                mp[s[left]]--;
                left++;
            }

            res = max(res, r-left+1);    
                
        }

        return res;

    }
};
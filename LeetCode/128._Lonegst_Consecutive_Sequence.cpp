class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> set;

        for(int i:nums){
            set.insert(i);
        }

        int maxConseq =0;

        for(int i : set){

            if(set.find(i-1)==set.end()){

            

            int conseq = 1;
            int current = i;

            while(set.find(current+1) != set.end()){
                current++;
                conseq++;
            }

            maxConseq = max(maxConseq, conseq);
            }
        }

        return maxConseq;
    }
};
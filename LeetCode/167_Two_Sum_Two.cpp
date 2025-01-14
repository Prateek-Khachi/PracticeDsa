class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int k) {
        
        int start = 0;
        int end = numbers.size()-1;
        vector<int> ans;
 
        while(start<=end){

            if(numbers[start]+numbers[end]==k){
                
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }

            if (numbers[start] + numbers[end] < k){
                start++;
            } else {
                end--;
            }
        }

    return {0};
    }
};
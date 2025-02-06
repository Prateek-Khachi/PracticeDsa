class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        int left = 0;
        int right = cols*rows-1;
        int mid = 0;
        int midVal = 0;

        while(left<=right){

            mid = left + (right-left)/2;
            midVal = matrix[mid/cols][mid%cols];

            if(midVal==target) return true;

            if(target>midVal) left = mid+1;
            else(right = mid-1);

        }

        return false;

    }
};

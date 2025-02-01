class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int i = num.size() - 1;
        int carry = 0;
        while (k > 0 || i >= 0 || carry) {
            int rem = k % 10;
            if (i >= 0) {
                num[i] = num[i] + rem + carry;
                carry = num[i] / 10;
                num[i] %= 10;
                i--;
            } else {
                num.insert(num.begin(), (rem + carry) % 10);
                carry = (rem + carry) / 10;
            }
            k /= 10;
        }
        return num;
    }
};
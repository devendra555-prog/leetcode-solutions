class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;

        if (n % 2 != 0) {
            for (int i = 0; i < n; i += 2) {
                if (n % (i + 1) == 0) {
                    sum += nums[i] * nums[i];
                }
            }
        }

        if (n % 2 == 0) {
            for (int i = 0; i < n; i++) {
                if (n % (i + 1) == 0) {
                    sum += nums[i] * nums[i];
                }
            }
        }

        return sum;
    }
};
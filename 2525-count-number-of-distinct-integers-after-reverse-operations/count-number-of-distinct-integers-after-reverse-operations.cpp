class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {

        set<int> ans;

        for (int i = 0; i < nums.size(); i++) {

            int temp = nums[i];
            int rev = 0;

            while (temp != 0) {
                int rem = temp % 10;
                temp = temp / 10;

                rev = rev * 10 + rem;
            }

            ans.insert(nums[i]);
            ans.insert(rev);
        }

        return ans.size();
    }
};

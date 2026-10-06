class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        
        int r=numbers.size()-1;
        while(l<r) {
            int cursum=numbers[l]+numbers[r];
            if(cursum==target) {
                return {l+1,r+1};
            }
            else if(cursum<target) {
                l++;

            }
            else {
                r--;
            }
        }
        return {};
        
    }
};
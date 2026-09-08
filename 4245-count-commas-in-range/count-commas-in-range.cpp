class Solution {
public:
    int countCommas(int n) {
        if(n>=1000) {
            int ans=n/1000;
            int res=(ans-1)*1000 + n%1000;
            return res+1;
        }
        else {
            return 0;
        }
        
    }
};
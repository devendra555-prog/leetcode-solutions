class Solution {
public:
    bool isPowerOfTwo(int n) {
        int temp=n;
        int i=0;
        while(pow(2,i)<=temp) {
            if(pow(2,i)==n) {
                return true;
            }
            i++;
            
        }
        return false;
    }
};
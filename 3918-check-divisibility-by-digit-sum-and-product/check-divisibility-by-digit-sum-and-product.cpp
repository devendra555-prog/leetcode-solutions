class Solution {
public:
    bool checkDivisibility(int n) {
        int rem;
        int res=0;
        int result=1;
        int temp=n;
        while(n!=0) {
            rem=n%10;
            n=n/10;
            res=res+rem;
            result=result*rem;
        }
        int k=res+result;
        if(temp%k==0) {
            return true;
        }
        else {
            return false;
        }
        
    }
};
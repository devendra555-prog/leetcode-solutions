class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n;
        int ans=1;
        int res=0;
        int rem;
        while(temp!=0) {
            rem=temp%10;
            temp=temp/10;
            ans=ans*rem;
            res=res+rem;

        }
        int p=ans-res;
        return p;
        
    }
};
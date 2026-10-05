class Solution {
public:
    int arrangeCoins(int n) {
            long long int i=1;
    long long int temp=n;

    while(temp>=0) {
        temp=temp-i;
        i++;

    }
    return i-2;
        
    }
};
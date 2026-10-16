class Solution {
public:
    int passwordStrength(string password) {
        int sum=0;
        set <char> s;
        for(char x: password) {
            s.insert(x);
        }
        for(char ch: s) {
            if(ch>='a' && ch<='z'){
                sum += 1;
            }
            if(ch>='A' && ch<='Z') {
                sum +=2;
            }
            if(ch>='0' && ch<='9') {
                sum +=3;

            }
            if(ch=='!' || ch=='@' || ch=='#' || ch=='$') {
                sum +=5;
            }
        }
        return sum;

        
    }
};
class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int ans = 0;
        int prev = 0;

        while (n > 0) {

            if (s[n-1] == 'I') {
                if (prev > 1) {
                    ans = ans - 1;
                }
                else {
                    ans = ans + 1;
                }
                prev = 1;
                n--;
            }

            else if (s[n-1] == 'V') {
                ans = ans + 5;
                prev = 5;
                n--;
            }

            else if (s[n-1] == 'X') {
                if (prev > 10) {
                    ans = ans - 10;
                }
                else {
                    ans = ans + 10;
                }
                prev = 10;
                n--;
            }

            else if (s[n-1] == 'L') {
                ans = ans + 50;
                prev = 50;
                n--;
            }

            else if (s[n-1] == 'C') {
                if (prev > 100) {
                    ans = ans - 100;
                }
                else {
                    ans = ans + 100;
                }
                prev = 100;
                n--;
            }

            else if (s[n-1] == 'D') {
                ans = ans + 500;
                prev = 500;
                n--;
            }

            else if (s[n-1] == 'M') {
                ans = ans + 1000;
                prev = 1000;
                n--;
            }
        }

        return ans;
    }
};
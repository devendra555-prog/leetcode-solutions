class Solution {
public:
    string intToRoman(int num) {

        string ans = "";

        int temp = num;

        while (temp != 0) {


            if (temp / 1000 > 0) {
                int k = temp / 1000;

                for (int i = 0; i < k; i++)
                    ans.push_back('M');

                temp = temp % 1000;
            }


            else if (temp / 100 == 9) {
                ans += "CM";
                temp = temp % 100;
            }

 
            else if (temp / 500 > 0) {
                ans.push_back('D');
                temp = temp % 500;
            }


            else if (temp / 100 == 4) {
                ans += "CD";
                temp = temp % 100;
            }


            else if (temp / 100 > 0) {
                int k = temp / 100;

                for (int i = 0; i < k; i++)
                    ans.push_back('C');

                temp = temp % 100;
            }


            else if (temp / 10 == 9) {
                ans += "XC";
                temp = temp % 10;
            }

            else if (temp / 50 > 0) {
                ans.push_back('L');
                temp = temp % 50;
            }


            else if (temp / 10 == 4) {
                ans += "XL";
                temp = temp % 10;
            }

 
            else if (temp / 10 > 0) {
                int k = temp / 10;

                for (int i = 0; i < k; i++)
                    ans.push_back('X');

                temp = temp % 10;
            }

            else if (temp == 9) {
                ans += "IX";
                temp = 0;
            }

            else if (temp / 5 > 0) {
                ans.push_back('V');
                temp = temp % 5;
            }


            else if (temp == 4) {
                ans += "IV";
                temp = 0;
            }


            else {
                for (int i = 0; i < temp; i++)
                    ans.push_back('I');

                temp = 0;
            }
        }

        return ans;
    }
};
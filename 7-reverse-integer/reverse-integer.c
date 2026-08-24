#include <limits.h>

int reverse(int x) {
    int temp = x;
    int ans = 0;

    while (temp != 0) {
        int rem = temp % 10;
        temp = temp / 10;


        if (ans > INT_MAX / 10 || 
            (ans == INT_MAX / 10 && rem > 7)) {
            return 0;
        }

        if (ans < INT_MIN / 10 || 
            (ans == INT_MIN / 10 && rem < -8)) {
            return 0;
        }

        ans = ans * 10 + rem;
    }

    return ans;
}
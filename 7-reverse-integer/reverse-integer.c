
int reverse(int x) {
    int temp = x;
    long long ans = 0;

    while (temp != 0) {
        int rem = temp % 10;
        temp = temp / 10;

        ans = ans * 10 + rem;
    }

    if (ans > 2147483647 || ans < -2147483648LL) {
        return 0;
    }

    return (int)ans;
}
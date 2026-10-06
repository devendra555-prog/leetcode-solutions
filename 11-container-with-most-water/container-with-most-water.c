int maxArea(int* height, int heightSize) {
    int l = 0;
    int r = heightSize - 1;
    int maxarea = 0;

    while (l < r) {
        int area = (height[l] < height[r] ? height[l] : height[r]) * (r - l);

        if (area > maxarea) {
            maxarea = area;
        }

        if (height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }

    return maxarea;
}
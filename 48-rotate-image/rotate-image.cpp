class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++) {
            for(int j=i;j<n;j++) {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
for(int i = 0; i < matrix.size(); i++)
{
    int left = 0;
    int right = matrix.size() - 1;

    while(left < right)
    {
        int temp = matrix[i][left];
        matrix[i][left] = matrix[i][right];
        matrix[i][right] = temp;

        left++;
        right--;
    }
}
        
        
    }
};
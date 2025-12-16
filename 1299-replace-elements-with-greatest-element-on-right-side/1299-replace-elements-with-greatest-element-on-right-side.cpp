class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, -1); 
        if (n == 0) return result; 
        for (int i = 0; i < n - 1; i++)
        {
            int maxRight = arr[i + 1];
            for (int j = i + 2; j < n; j++)
            {
                maxRight = max(maxRight, arr[j]);
            }
            result[i] = maxRight;
        }
        return result;
    }
};
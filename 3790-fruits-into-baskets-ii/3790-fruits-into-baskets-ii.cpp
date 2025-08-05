class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        vector<bool> used(n, false); 
        int unplaced = n;

        for (int i = 0; i < n; ++i) {
            int fruit = fruits[i];
            for (int j = 0; j < n; ++j) {
                if (!used[j] && baskets[j] >= fruit) {
                    used[j] = true;
                    unplaced--;
                    break;
                }
            }
        }
        return unplaced;
    }
};
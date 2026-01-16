class Solution {
public:
    int numWays(string s) {
        const long long mod = 1e9 + 7;
        long long ones = 0;
        int n = s.size();

        // count ones
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') ones++;
        }

        if (ones % 3 != 0) return 0;

        // all zeros case
        if (ones == 0) {
            long long ways = (long long)(n - 1) * (n - 2) / 2;
            return ways % mod;
        }

        long long firstOneThird = ones / 3;
        long long secondOneThird = 2 * firstOneThird;

        long long firstway = 0, secondway = 0;
        long long cnt = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cnt++;

            if (cnt == firstOneThird) firstway++;
            if (cnt == secondOneThird) secondway++;
        }

        return (firstway * secondway) % mod;
    }
};

class Solution {
public:
    bool stoneGame(vector<int>& a) {
        int n = a.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));
        function<int(int,int)> dfs = [&](int l, int r) -> int {
            if (l > r) return 0;
            if (dp[l][r] != -1) return dp[l][r];
            int taken =n-(r-l+1);
            if (taken % 2 == 0) { 
                return dp[l][r] = max(
                    a[l] + dfs(l + 1, r),
                    a[r] + dfs(l, r - 1)
                );
            } else {
                return dp[l][r] = min(
                    dfs(l + 1, r),
                    dfs(l, r - 1)
                );
            }
        };
        int alice=dfs(0, n - 1);
        int total=accumulate(a.begin(),a.end(),0ll);
        return alice>total-alice;
    }
};
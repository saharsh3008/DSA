class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n=scores.size();
        vector<pair<int,int>> players;
        for(int i=0;i<n;i++){
            players.push_back({scores[i],ages[i]});
        }
        sort(players.begin(),players.end());
        vector<int>dp(n,0);
        int ans=0;
        for (int i=0;i<n;i++){
            dp[i]=players[i].first;
            for(int j=0;j<i;j++){
                if(players[i].second>=players[j].second){
                    dp[i]=max(dp[i],dp[j]+players[i].first);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
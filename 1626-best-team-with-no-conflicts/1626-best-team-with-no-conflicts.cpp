class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) 
    {
        int n = scores.size();
        vector<pair<int, int>> players;
        for(int i = 0; i < n; i++)
            players.push_back({ages[i], scores[i]});
        
        sort(players.begin(), players.end());
        int res[n];
 
        for (int i = 0; i < n; i++ )
            res[i] = players[i].second;
        
        for (int i = 1; i < n; i++ )
        {
            for (int j = 0; j < i; j++ )
            {
                //here >= is used whereas in MSIS only > used because here
                //same age players are also there
                if (players[i].second >= players[j].second 
                    && res[i] < res[j] + players[i].second)
                    res[i] = res[j] + players[i].second;
            }
        }    

        return *max_element(res, res + n);
        
    }
};
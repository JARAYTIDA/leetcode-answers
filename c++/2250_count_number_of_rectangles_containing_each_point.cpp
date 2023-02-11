class Solution {
public:
    vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
        vector<vector<int>> mp(101);
        
        for(auto i:rectangles)
            mp[i[1]].push_back(i[0]);
        
        for(auto & i:mp)
            sort(i.begin(), i.end());
        
        vector<int> ans;
        for(auto &i:points){
            int cnt = 0;
            for(int j = i[1]; j<101; j++){
                auto n = lower_bound(mp[j].begin(), mp[j].end(), i[0]);
                cnt += mp[j].end() - n;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
class Solution {
public:
    set<vector<int>> ans;
    
    void per(vector<int> &temp,vector<int>& vis, vector<int> &tmp, int n){
        int m = tmp.size();
        
        if(temp.size() == n){
            ans.insert(temp);
            return ;
        }
        for(int i = 0; i<m; i++){
            if(!vis[i]){
                vis[i] = 1;
                temp.push_back(tmp[i]);
                per(temp, vis, tmp, n);
                temp.pop_back();
                vis[i] = 0;
            }
        }
        return ;
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int> tmp = nums;
        vector<vector<int>> fin;
        vector<int> temp = {};
        vector<int> vis(nums.size(), 0);
        per(temp, vis, tmp, nums.size());
        
        for(auto i:ans)
            fin.push_back(i);
        
        return fin;
    }
};
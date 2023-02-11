class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<vector<int>> ans;
        for(int i = 0; i<nums.size(); i++){
            vector<int> temp = {nums[i], i};
            ans.push_back(temp);
        }
        
        sort(ans.begin(), ans.end());
        
        
        int i = 0;
        int j  = ans.size()-1;
        
        while(i<j){
            if(ans[i][0] + ans[j][0] == target)
                return {ans[i][1],ans[j][1]};
            
            else if(ans[i][0] + ans[j][0] >target)
                j--;
            
            else i++;
        }
        
        return {};
        
    }
};
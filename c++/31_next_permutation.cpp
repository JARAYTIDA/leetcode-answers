class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size()-1;
        int i = n-1;
        int j = n;
        
        while(i>=0 && nums[i] >= nums[i+1]){i--;}
        if(i == -1){
            sort(nums.begin(), nums.end());
            return ;
        }
        while(j>0 && nums[j] == nums[j-1]){j--;}
        while(j>=0 && nums[i] >= nums[j]){j--;}
        swap(nums[i], nums[j]);
        sort(nums.begin()+i+1, nums.end());
        
        cout<<i<<" "<<j;
    }
};
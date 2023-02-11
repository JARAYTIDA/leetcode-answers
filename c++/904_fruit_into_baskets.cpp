class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || n == 2)
            return n;
        
        int a = nums[0];
        int i = 0;
        while(i<n && nums[i] == a)
            i++;
        if(i >= n) return n;
        int b = nums[i];
        i = 0;
        int st = 0;
        int ans = INT_MIN;
        
        while(i<n){
            while( i<n && (nums[i] == a || nums[i] == b))
                i++;
            
            ans = max(i-st, ans);
            
            if(i<n){
                a = nums[i-1];
                b = nums[i];
                st = i-1;
                
            
                while( st > 0 && nums[st] == a )
                    st--;

                st++;
                
            }

            
        }
        
        return ans;
    }
};
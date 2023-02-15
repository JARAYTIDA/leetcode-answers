class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        
        int ans = INT_MIN;
        while(i<j){
            if(height[i] == height[j]){
                ans = max(ans, height[i]*(j-i));
                if(height[i+1] > height[j-1])
                    i++;
                else j--;
            }
            else{
                ans = max(ans, min(height[i], height[j])*(j-i));
                if(height[i] > height[j])
                    j--;
                else i++;
            }
        }
        return ans;
    }
};
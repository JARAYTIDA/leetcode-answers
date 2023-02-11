class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.length();
        
        if(n == 0 || n == 1)
            return n;
        
        set<char> st;
        
        int len = 1, start = 0, end = 0;
        
        while(end < n){
            auto it = st.find(s[end]);
            if(it == st.end()){
                st.insert(s[end]);
                len = max(len , (end - start + 1));
                end++;
            }
            
            else{

                st.erase(s[start]);
                start++;
            }
        }
        
        return len;
        
    }
};
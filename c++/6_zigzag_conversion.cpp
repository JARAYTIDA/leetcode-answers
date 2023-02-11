class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        
        vector<string> str(numRows);
        
        bool down = true;
        int i = 0;
        for(int j = 0; j<s.length(); j++){
            while(i != numRows-1 && j<s.length()){
                    char ch = s[j];
                    str[i].push_back(ch);
                    i++;
                    j++;
            }
            
            while(i != 0 && j<s.length()){
                    char ch = s[j];
                    str[i].push_back(ch);
                    i--;
                    j++;
            }
            j--;
        }
        
        string ans;
        for( auto j:str )
            ans += j;
        
        return ans;
    }
};
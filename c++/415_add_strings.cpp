class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans = "";
        int n = num1.length();
        int m = num2.length();
        int i = n-1;
        int j = m-1;
        int carry = 0;
        while(i>=0 && j>=0){
            int sum = num1[i] - '0' + num2[j] - '0' + carry;
            ans.push_back(sum%10 + '0');
            carry = sum/10;
            i--;
            j--;
        }
        while(i>=0){
            int sum = num1[i] - '0' + carry;
            ans.push_back(sum%10 + '0');
            carry = sum/10;
            i--;
        }
        
        while(j>=0){
            int sum = num2[j] - '0' + carry;
            ans.push_back(sum%10 + '0');
            carry = sum/10;
            j--;
        }
        
        if(carry > 0) ans.push_back(carry + '0');
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
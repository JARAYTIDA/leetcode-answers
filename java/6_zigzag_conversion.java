class Solution {
    public String convert(String s, int numRows) {
        String[] ans = new String[numRows];
        int n = s.length() ;
        boolean flag = true;
        int j = 0;
        for(int i = 0; i<n; i++){
            if(flag){
                ans[j] += s[i];
                j++;
                if(j == numRows-1){
                    flag = !flag;
                }
            }
            
            else{
                ans[j] += s[i];
                j--;
                if(j == 0)
                    flag = !flag;
            }
        }
        
        String str = "";
        for(int i = 0; i<numRows; i++)
            str = ans[i];
        
        return str;
    }
}
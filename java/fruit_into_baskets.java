class Solution {
    public int max(int a, int b){
        if(a>b) return a;
        else return b;
    }
    public int totalFruit(int[] fruits) {
        int n = fruits.length;
        if(n == 1 || n == 2)
            return n;
        
        int a = fruits[0];
        int i = 0;
        while(i<n && fruits[i] == a)
            i++;
        if(i >= n) return n;
        int b = fruits[i];
        i = 0;
        int st = 0;
        int ans = -1000;
        while(i<n){
            while(i<n && (fruits[i] == a || fruits[i] == b))
                i++;
            
            ans = max(ans, i-st);
            if(i<n){
                b = fruits[i];
                a = fruits[i-1];
                st = i-1;
                while(st >= 0 && fruits[st] == a)
                    st--;
            }
            st++;
        }
        
        return ans;
        
    }
}

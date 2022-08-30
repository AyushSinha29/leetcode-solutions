class Solution {
public:
    int countSubstrings(string s) {
        int ans = 0;
        int r,l;
        
        // if the palindrome is odd
        for(int i=0; i<s.size(); i++){
            l = i; r = i;
            while(l >= 0 && r<= s.size()){
                if(s[l] == s[r]){
                    ans++;
                    l--; r++;
                } 
                else break;
            }
        }
        
        // if the palidrome is even 
        for(int i=0; i<s.size(); i++){
            l = i; r = i+1;
            while(l >= 0 && r <= s.size()){
                if(s[l] == s[r]){
                    ans++;
                    l--; r++;
                } 
                else break;
            }
        }
        
        return ans;
    }
};
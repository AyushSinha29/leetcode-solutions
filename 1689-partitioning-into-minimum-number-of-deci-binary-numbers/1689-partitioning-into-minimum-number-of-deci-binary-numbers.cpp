class Solution {
public:
    int minPartitions(string s) {
        int max1=0;
        int n=s.length();
        for(int i=0;i<n;i++){
         int val=s[i]-'0';
            max1=max(max1,val);
        }
        return max1;
    }
};
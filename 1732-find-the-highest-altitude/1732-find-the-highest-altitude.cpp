class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        for(int i=0;i<gain.size();i++)
        {
            sum=sum+gain[i];
            gain[i]=sum;
        }
        int mx=*max_element(gain.begin(),gain.end());
        if(mx<0)
        {
            return 0;
        }
        
        
       return mx;}
 
};
class Solution {
public:
	string digitSum(string s, int k) {
		string ans = "";
    

    while( s.size() > k )
    {
        int t = s.size()%k;
        string temp = "";
        for(int i = 0; i < s.size() - t; ++i)
        {
            int sum = 0;
            for(int j = i; j < k+i; ++j)
            {
                sum += s[j] - '0';
            }
            i = i+k-1;
            temp += to_string(sum);
        }
        
        int sum  = 0;
        if( s.size() % k != 0 )
        {
            for(int i = s.size()-t; i<s.size(); ++i)
            {
                sum += s[i] - '0';
            }
            temp += to_string(sum);
            
        }

        s = temp;
    }
    ans = s;
    
    return ans;
}
};
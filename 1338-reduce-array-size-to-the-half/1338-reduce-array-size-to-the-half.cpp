class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> m;
        vector<int> v;
        for(int n:arr){
            if (m.find(n)==m.end()){
                m[n] = 0;
                v.push_back(n);
            }
            m[n]++;
        }
        sort(v.begin(), v.end(), [&m](int a, int b){
            return m[a] > m[b];
        });
        int count = 0;
        int pos = 0;
        while(count < arr.size()/2){
            count += m[v[pos]];
            pos++;
        }
        return pos;
    }
};
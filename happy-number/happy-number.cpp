class Solution {
public:
    
    int square_sum(int n){
        int sum = 0;
        while(n>0){
            sum += pow(n%10, 2);
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        
        vector<int> res;
       
        while(true){
            if(n == 1) 
                return true;
            
            n = square_sum(n);
            
            if(find(res.begin(), res.end(), n) != res.end()) 
                return false;
            
            else res.push_back(n);
        }
        return false;
    }
};
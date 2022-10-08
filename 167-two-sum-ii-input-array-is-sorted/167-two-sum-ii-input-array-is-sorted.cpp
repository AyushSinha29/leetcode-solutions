class Solution {
public:
    
    vector<int> twoSum(vector<int>& numbers, int target) {

        int i = 0;
        int mx = numbers.size()-1;
        
        while(i < mx){
        
            if(numbers[i] + numbers[mx] > target) 
                mx--;
            
            else if(numbers[i] + numbers[mx] < target) 
                i++;
           
            else 
                return {i+1, mx+1};
        }
        
        return {0, 0};
    }
};
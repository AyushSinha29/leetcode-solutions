class Solution {
public:
   
    vector<int> minOperations(string boxes) {
         vector<int> rr ;
        int ones = 0 ;
        int temp = 0 ; 
        for(int i = 0 ; i < boxes.size() ; ++i ){
            rr.push_back(temp) ;
            ones += boxes[i]-'0' ;
            temp += ones ;
        }
        ones = temp = 0 ;
        for(int i = boxes.size() - 1 ; i >=0 ; --i ){
            rr[i] += temp ;;
            ones += boxes[i]-'0' ;
            temp += ones ;
        }
        return rr ;
        
    }
};
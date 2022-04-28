class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
 
int k=0;
int pos=nums[0];
for(int i=1;i<nums.size();i++)
{
    if(abs(k-pos)>abs(k-nums[i]))
        pos=nums[i];
    else if(abs(k-pos)==abs(k-nums[i]))
        pos=nums[i]>pos ? nums[i]:pos;
}
        
return pos;
}


        
    
    
};
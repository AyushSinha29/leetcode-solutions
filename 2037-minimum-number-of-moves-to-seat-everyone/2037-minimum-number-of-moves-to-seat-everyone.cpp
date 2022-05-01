class Solution {
public:
int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    
    sort(seats.begin(),seats.end());
    sort(students.begin(),students.end());
    
    int min=0,res=0;
    for(int i=0;i<seats.size();i++)
    {
        res = (students[i]-seats[i]);
        if (res<0){
            min=min+(-res);
        }
        else{
            min=min+res;
        }

    }
    
    return min;

}
};
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        if(nums.size() <2) return -1;
        int large = INT_MIN;      
        int secondl = INT_MIN;
        for(int i =0; i <nums.size(); i++){
            if(nums[i] > large){
                secondl = large;
                large = nums[i];
            }
            else if(nums[i] > secondl && nums[i] != large) secondl = nums[i];
        }
        return (secondl == INT_MIN) ? -1 : secondl;
    }
};

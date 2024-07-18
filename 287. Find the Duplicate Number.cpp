class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        int ans;
        sort(nums.begin(),nums.end());
        for(int l=1;l<size;l++){
            if(nums[l]==nums[l-1]){
                return nums[l];
            }
        }
        return -1;
    }
};
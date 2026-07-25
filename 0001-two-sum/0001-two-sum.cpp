class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> values;

        for(int i =0;i<nums.size();i++){
            int rem = target -nums[i];
            if(values.find(rem) != values.end()){
                return {i,values[rem]};
            }

            if(values.find(nums[i]) == values.end()) values[nums[i]] = i;
        }
        return {-1,-1};
    }
};
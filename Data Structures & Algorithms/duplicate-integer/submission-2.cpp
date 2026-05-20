class Solution {
   public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty()){
            return false;
        }
        for (int i = 0; i < nums.size() - 1; i++) {
            // comp the rest of the list with j
            for (int j = i + 1; j < nums.size(); j++) {
                // nunmbers match
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
            // If no match is found
        }
        return false;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_to_index;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement is already in the map
            if (num_to_index.find(complement) != num_to_index.end()) {
                // If found, return the indices
                return {num_to_index[complement], i};
            }
            
            // Otherwise, insert the current number and its index into the map
            num_to_index[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though the prompt guarantees one)
        return {};
    }
};
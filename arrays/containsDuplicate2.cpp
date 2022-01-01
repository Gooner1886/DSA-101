// Leetcode - Contains Duplicate II

bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> frequency, value;
        for(int i = 0; i < nums.size(); i++) {
            frequency[nums[i]]++;
            
            if(frequency[nums[i]] >=2 && (abs(value[nums[i]] - i) <= k)) {
                return true;
            }
            value[nums[i]] = i;
        }
        return false;
    }
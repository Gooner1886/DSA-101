// Contains Duplicate - Leetcode

bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> _map;
        for (int i =0; i < nums.size(); i++) {
            int num = nums[i];
            int duplicate = num;
            auto it = _map.find(duplicate);
            if(it != _map.end()) {
                return true;
            }
            _map[num] = i;
        }
        return false;
    }
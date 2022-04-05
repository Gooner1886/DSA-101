// Leetcode - 349 - Intersection of Two Arrays

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> unique;
        vector<int> answer;
        for(int i = 0; i < nums1.size(); i++) {
            for(int j = 0; j < nums2.size(); j++) {
                if(nums1[i] == nums2[j]) {
                    unique.insert(nums1[i]);
                }
            }
        }
        for(auto val: unique) {
            answer.push_back(val);
        }
        return answer;
    }
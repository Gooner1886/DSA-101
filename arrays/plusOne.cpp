// Plus one - Leetcode

vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size() - 1;
        while(idx >= 0) {
            if(digits[idx] == 9) {
                digits[idx] = 0;
            }
            else {
                digits[idx]+=1;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
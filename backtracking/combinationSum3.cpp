// Leetcode - 216 - Combination Sum III
void backtrack(vector<vector<int>>& result, vector<int>& each, int k, int n, int number, int sum) {
        if(k == 0) {
            if(sum == n) {
                result.push_back(each); 
            }
            return;
        }
        
        for(int i = number; i <= 9; i++) {
            each.push_back(i);
            backtrack(result, each, k - 1, n, i + 1, sum + i);
            each.pop_back();
        }   
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> each;
        backtrack(result, each, k, n, 1, 0);
        return result;
    }
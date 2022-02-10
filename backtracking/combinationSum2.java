// Leetcode - 40 - Combination Sum II
public List<List<Integer>> combinationSum2(int[] candidates, int target) {
    List<List<Integer>> result = new ArrayList<>();
    Arrays.sort(candidates);
    backtrack(candidates, 0, target, new ArrayList<Integer>(), result);
    return result;
}

public void backtrack(int[] candidates, int index, int target, List<Integer> current, List<List<Integer>> result) {
    if(target == 0) {
        result.add(new ArrayList<>(current));
        return;
    }
    
    if(target < 0) return;
    
    for(int i = index; i < candidates.length; i++) {
        if(i == index || candidates[i] != candidates[i-1]) {
            current.add(candidates[i]);
            backtrack(candidates, i + 1, target - candidates[i], current, result);
            current.remove(current.size() - 1);
        }
    }
}
// Leetcode - 746 - Min Cost Climbing stairs

public int minCostClimbingStairs(int[] cost) {
    int a=cost[0];
    int b=cost[1];
    for(int i=2;i<cost.length;i++) {
        int c = cost[i] + Math.min(a, b);
        a=b;
        b=c;
    }
    return Math.min(a,b);
}

// Leetcode - 11 - Container with most water
public int maxArea(int[] height) {
    int i = 0;
    int j = height.length - 1;
    int result = Integer.MIN_VALUE;
    int product;
    while(i <= j) {
        if(height[i] <= height[j]) {
            product = (j-i) * height[i];
            i++;
        } else {
            product = (j-i) * height[j];
            j--;
        }
        result = Math.max(result, product);
    }
    return result;
}
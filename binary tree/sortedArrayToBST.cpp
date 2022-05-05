// Leetcode - 108 - Convert Sorted Array to Binary Search Tree
TreeNode *generateBST(vector<int> &nums, int start, int end)
{
    if (start > end)
        return NULL;
    int mid = start + (end - start) / 2;
    TreeNode *head = new TreeNode(nums[mid]);
    head->left = generateBST(nums, start, mid - 1);
    head->right = generateBST(nums, mid + 1, end);
    return head;
}

TreeNode *sortedArrayToBST(vector<int> &nums)
{
    return generateBST(nums, 0, nums.size() - 1);
}
// hourglass sum - hackerrank

int calc_hg_sum(vector<vector<int>> a, int i, int j) {
    int sum = a[i][j] + a[i][j+1] + a[i][j+2] + a[i+1][j+1] + a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
    return sum;
}

int hourglassSum(vector<vector<int>> arr) {
    vector<int> results;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            int sum = calc_hg_sum(arr, i, j);
            results.push_back(sum);
        }
    }
    int max_sum = *max_element(results.begin(), results.end());
    return max_sum;
}
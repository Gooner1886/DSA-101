// Left rotate an array by d 

vector<int> reverseArray(vector<int> a, int start, int end) {
    while(start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    return a;
}

vector<int> rotateLeft(int d, vector<int> arr) {
    int i = 0;
    int n = arr.size();
    arr = reverseArray(arr, i, d-1);
    arr = reverseArray(arr, d, n-1);
    arr = reverseArray(arr, i, n-1);
    return arr;
}
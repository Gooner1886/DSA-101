// Function to reverse array

vector<int> reverseArray(vector<int> a) {
    int n = a.size(); int i = 0; int j = n - 1; int temp;
    if(n < 1 && n > pow(10, 3)) exit(0);
    int mid = n / 2;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    return a;
}
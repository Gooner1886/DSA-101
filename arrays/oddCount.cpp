// replace sequence of odd numbers in an array with their count
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void) {
    int count = 0;
    vector<int> arr;
    vector<int> modified;
    int input;
    cout<<"\nEnter the elements in the array\n";
    while(cin >> input && input != -1) {
        arr.push_back(input);
    }
    
    int last_el = arr[arr.size() - 1];

    for(int j = 0; j < arr.size(); j++) {
        if((arr[j] & 1) == 1) {
            count++;
        }
        else {
            if(count > 1) {
                modified.push_back(count);
                count = 0;
                modified.push_back(arr[j]);
            }
            else if(count == 1) {
                modified.push_back(arr[j-1]);
                count = 0;
                modified.push_back(arr[j]);
            }
            else {
                modified.push_back(arr[j]);
            }
        }
    }

    if (count == 1) {
        modified.push_back(last_el);
    }

    for(int x = 0; x < modified.size(); x++) {
        cout<<modified[x]<<" ";
    }

    return 0;

}
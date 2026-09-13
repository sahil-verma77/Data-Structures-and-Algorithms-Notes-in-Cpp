#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void powerSet(int idx, vector<int> ans, vector<int>& arr, vector<vector<int>>& p) {
    if (idx == arr.size()) {
        p.push_back(ans);
        return;
    }
    powerSet(idx+1, ans, arr, p); // skip
    ans.push_back(arr[idx]);
    powerSet(idx+1, ans, arr, p); // pick
}
vector<vector<int>> subsets(vector<int>& arr) {
    vector<int> ans;
    vector<vector<int>> p;
    powerSet(0, ans, arr, p);
    return p;
}
void print(vector<vector<int>>& p) {
    for (int i = 0; i < p.size(); i++) {
        for (int ele : p[i]) cout << ele << " "; 
        cout << endl;
    }
    cout << endl;
}
int main() {
    // Leetcode 78 (Subsets)
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> result = subsets(arr);
    print(result);
}